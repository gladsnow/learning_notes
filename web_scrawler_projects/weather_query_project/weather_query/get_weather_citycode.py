# -*- coding: utf-8 -*-
from bs4 import BeautifulSoup   #用来代替正则表达式取源码中相应标签的内容
import random
import requests #用来抓取网页的html源代码
import socket #用做异常处理
import http.client #用做异常处理
from xml.dom.minidom import Document
from concurrent.futures import ThreadPoolExecutor,wait, ALL_COMPLETED
from queue import Queue
from threading import Event
import logging,logging.config

def get_data_from_url(url):
    """模拟浏览器来获取网页的html代码"""
    header = {
        'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8',
        'Accept-Encoding': 'gzip, deflate, sdch',
        'Accept-Language': 'zh-CN,zh;q=0.8',
        'Connection': 'keep-alive',
        'User-Agent': 'Mozilla/5.0 (Windows NT 6.3; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/43.0.235',
    }

    # 设定超时时间，取随机数是因为防止被网站认为是爬虫
    logger = logging.getLogger('weather')
    timeout = random.choice(range(10, 20))
    try:
        rep = requests.get(url, headers=header, timeout=timeout)
        rep.encoding = "utf-8"
    except socket.timeout as e:
        print("3:", e)
        logger.error("socket.timeout:%s",e)
        return None
    except socket.error as e:
        logger.error("socket.error:%s", e)
        return None
    except http.client.BadStatusLine as e:
        logger.error("http.client.BadStatusLine:%s", e)
        return None
    except http.client.IncompleteRead as e:
        logger.error("http.client.IncompleteRead:%s", e)
        return None
    return rep.text

class RequestCityCodeThreadPool:
    pro_url_prefix =  'http://www.weather.com.cn'
    prov_beijing_url = 'http://www.weather.com.cn/textFC/beijing.shtml'

    def __init__(self):
        self.thread_executor = ThreadPoolExecutor(10)
        self.logger = logging.getLogger('weather')

    def get_prov_data(self):
        '''
        获取省份列表
        :return: OK--province list; Failed--None
        '''
        prov_data = get_data_from_url(self.prov_beijing_url)
        if prov_data == None:
            self.logger.error("Can not get province data")
            return None

        bs = BeautifulSoup(prov_data, features='lxml')  # 创建BeautifulSoup对象
        body = bs.body  # 获取body部分
        div_data = body.find("div", {"class": "lqcontentBoxheader"})
        a_data = div_data.select("a[href]")
        prov_url_list=[]
        for i in range(len(a_data)):
            prov_url_list.append(self.pro_url_prefix+a_data[i].get('href'))

        self.logger.debug("Province data:%s",prov_url_list)
        return prov_url_list

    def requst_thread(self,complete_callback):
        '''
        获取每个省份的城市的天气代码
        :param complete_callback:
        :return:
        '''
        prov_url_list = self.get_prov_data()
        for i in range (len(prov_url_list)):
            task = self.thread_executor.submit(get_data_from_url,(prov_url_list[i]))
            task.add_done_callback(complete_callback)

class ProcessDataThreadPool(object):
    prov_list = ['北京', '上海', '天津', '重庆', '黑龙江', '吉林', '辽宁', '内蒙古', '河北', '山西', '陕西', '山东', '新疆', '西藏', '青海', '甘肃', '宁夏',
                 '河南', '江苏', '湖北', '浙江', '安徽', '福建', '江西', '湖南', '贵州', '四川', '广东', '云南', '广西', '海南', '香港', '澳门', '台湾']
    prov_code_index = '10101'
    def __init__(self,save_xml_name):
        self.thread_pool = ThreadPoolExecutor(max_workers = 34)
        self.req_result_queue = Queue()
        self.save_xml_name = save_xml_name
        self.read_event = Event()
        self.logger = logging.getLogger('weather')

    def enqueue_data(self,request_result):
        self.req_result_queue.put(request_result)
        self.read_event.set()

    def process_data(self,save_obj):
        '''
        从HTML文件中获取每个省份的城市天气代码
        :param save_obj:
        :return:
        '''
        while True:
            self.read_event.wait()
            html_content = self.req_result_queue.get()
            bs = BeautifulSoup(html_content, features='lxml')  # 创建BeautifulSoup对象
            body = bs.body  # 获取body部分
            div_hanml_data = body.find("div", {"class": "hanml"})
            a_data = div_hanml_data.select(".conMidtab3 a[href]")

            city_code_dict = {}
            for i in range(len(a_data)):
                if a_data[i].string != "详情":
                    city_code_dict[a_data[i].get('href').split('/')[-1].split('.')[0]] = a_data[i].string

            self.logger.debug("weather city code:%s",city_code_dict)
            save_obj.send(city_code_dict)
            self.read_event.clear()
            break
    def process_thread_start(self):
        save_obj = self.save_citycode_file()
        save_obj.send(None)
        all_task = []
        for i in range(34):
            all_task.append(self.thread_pool.submit(self.process_data,(save_obj)))
        wait(all_task, return_when=ALL_COMPLETED)

    def save_citycode_file(self):
        '''
        把获取的城市天气代码按照特定格式保存在xml文件中
        :return:
        '''
        prov_dict={}
        for m in range(len(self.prov_list)):
            prov_dict[str(int(self.prov_code_index) + m)] = self.prov_list[m]
        count_num = 0
        doc = Document()
        country = doc.createElement("China")
        doc.appendChild(country)

        with open(self.save_xml_name, 'w', encoding='utf-8') as f:
            while True:
                citycode_data = yield
                if (citycode_data == None):
                    continue
                citycode_list = list(citycode_data.items())
                province = doc.createElement('province')
                tmp_citycode = ''
                for j in range(len(citycode_list)):
                    citycode = citycode_list[j][0]
                    if (j == 0):
                        tmp_citycode = citycode_list[j][0]
                        province.setAttribute('id', citycode[:-4])
                        province.setAttribute('province_name', prov_dict[citycode[:-4]])
                        country.appendChild(province)
                        city = doc.createElement('city')
                        city.setAttribute('weather_id', citycode)
                        city.setAttribute('city_name', citycode_list[j][1])
                        province.appendChild(city)
                        continue

                    if prov_dict[citycode[:-4]] == "海南":
                        city = doc.createElement('city')
                        city.setAttribute('weather_id', citycode)
                        city.setAttribute('city_name', citycode_list[j][1])
                        province.appendChild(city)
                        continue

                    if (tmp_citycode[:-2] < citycode[:-2]):
                        tmp_citycode = citycode
                        city = doc.createElement('city')
                        city.setAttribute('weather_id', citycode)
                        city.setAttribute('city_name', citycode_list[j][1])
                        province.appendChild(city)
                        continue
                    county = doc.createElement('county')
                    county.setAttribute('weather_id', citycode)
                    county.setAttribute('county_name', citycode_list[j][1])
                    city.appendChild(county)
                count_num = count_num + 1;
                if(count_num == 33):
                    f.write(doc.toprettyxml(indent='\t', newl="\n"))
                    self.logger.debug("write citycode xml file OK.")
            if count_num != 33:
                self.logger.error("write citycode xml file Failed.")

class GetWeatherCityCode(object):
    def __init__(self,save_xml_name):
        self.req_thread_pool = RequestCityCodeThreadPool()
        self.process_thread_pool = ProcessDataThreadPool(save_xml_name)

    def req_completion_callback(self,result_future):
        data = result_future.result()
        self.process_thread_pool.enqueue_data(data)

    def start_runner(self):
        self.req_thread_pool.requst_thread(self.req_completion_callback)
        self.process_thread_pool.process_thread_start()

if __name__=="__main__":
    pass




