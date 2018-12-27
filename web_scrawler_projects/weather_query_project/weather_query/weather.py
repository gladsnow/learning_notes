#抓取天气网站最近7天的天气情况，写入文件并在控制台显示
from bs4 import BeautifulSoup   #用来代替正则表达式取源码中相应标签的内容
import json
import os
import xml.etree.cElementTree as ET
from weather_query.get_weather_citycode import get_data_from_url,GetWeatherCityCode
import logging, logging.config

class GetWeatherData(object):
    today_weather_url_prefix = "http://www.weather.com.cn/weather1d/"
    mobile_weather_url_prefix = "http://mobile.weathercn.com/index.do?id="
    def __init__(self,weather_citycode_xml_file):
        self.citycode_file = weather_citycode_xml_file
        self.logger = logging.getLogger('weather')

    def get_weather_code (self,input_city_name):
        '''
        从xml文件中获取城市代码
        :param input_city_name: ''
        :return: Ok--citycode; Failed--None
        '''
        city_list = input_city_name.split('-')
        prov_name = None
        city_name = None
        county_name = None
        for i in range(len(city_list)):
            if i == 0:
                prov_name = city_list[i]
            elif i == 1:
                city_name = city_list[i]
            elif i == 2:
                county_name = city_list[i]
        self.logger.debug('Queryed parameters：province：%s,city：%s,county：%s',prov_name,city_name,county_name)
        if prov_name == None or city_name == None:
            self.logger.error("Can not parse city name.Queryed parameters:%s.",input_city_name)
            return None
        if not os.path.exists(self.citycode_file) or os.path.basename(self.citycode_file).split('.')[1] != 'xml':
            self.logger.error("No file found or Error file type.File: %s.",self.citycode_file)
            return None
        tree = ET.parse(self.citycode_file)
        root = tree.getroot()
        prov_data_list = root.findall('province')
        weather_code = None
        for child in prov_data_list:
            if(child.attrib['province_name'] == prov_name):
                for city in child:
                    if(city.attrib['city_name'] == city_name):
                        weather_code = city.attrib['weather_id']
                        if(county_name == None):
                            return weather_code
                        for county in city:
                            if(county.attrib['county_name'] == county_name):
                                weather_code = county.attrib['weather_id']
                                return weather_code
                        self.logger.error("Can't not find the weather code of the county.")
                        return None
                self.logger.error("Can't not find the weather code of the city.")
                break
        return weather_code

    def get_weather_info(self,city_name):
        '''
        获取天气信息
        :param city_name:
        :return:OK--weather_data_json; Failed--None
        '''
        weather_code = self.get_weather_code(city_name)
        self.logger.debug("weather code:%s",weather_code)
        if weather_code  == None :
            self.logger.error("Can't not find the weather code for queryed city.")
            return None
        html_content = get_data_from_url(self.mobile_weather_url_prefix + weather_code)
        bs = BeautifulSoup(html_content, features='lxml')  # 创建BeautifulSoup对象
        body = bs.body  # 获取body部分
        self.logger.debug("html body content:%s", body)

        today_weather_info_dict = {}
        div_header_info_data = body.find('div',{'class':'header-info'})
        div_current_date_data = div_header_info_data.find('div', {'class': 'curdate'})
        span_date_data = div_current_date_data.select('span')
        today_date = span_date_data[0].contents[0] +" "+ span_date_data[1].contents[0]
        today_weather_info_dict['current_date'] = today_date

        div_current_weather_data = div_header_info_data.find('div',{'class':'current-weather'})
        today_current_temp_data = div_current_weather_data.find('span',{'class':'cur-temp'})
        today_current_temp = today_current_temp_data.contents[0] + today_current_temp_data.select('sup')[0].string
        today_weather_info_dict['current_temp'] = today_current_temp
        today_temp = div_current_weather_data.find('span',{'class':'temperature'}).contents[0].replace('\r','').replace('\t','').replace('\n','').strip(' ')
        today_weather_info_dict['max_min_temp'] = today_temp
        today_weather_desciption = div_current_weather_data.find('span',{'class':'description'}).contents[0]
        today_weather_info_dict['weather_description'] = today_weather_desciption
        div_aqi_data = div_current_weather_data.find('div',{'class':'aqi aqi-bgcolor-1'})
        today_air_quality_info = div_aqi_data.find('a').string.replace('\xa0','')
        today_weather_info_dict['air_quality'] = today_air_quality_info
        self.logger.debug("today wather info:%s", today_weather_info_dict)

        div_main_body_data = body.find('div',{'class':'main-body'})
        table_sevendays_data = div_main_body_data.find('table',{'class':'sevendays'})
        tr_data = table_sevendays_data.find_all("tr")
        sevendays_weather_dict ={}
        for tr in tr_data:
            date_data = tr.select('.date')[0].contents[0]
            temp_data = tr.select('.temp')[0].contents[0].replace('\r','').replace('\t','').replace('\n','').strip(' ')
            desc_data = tr.select('.desc')[0].contents[0].replace('\r','').replace('\t','').replace('\n','').strip(' ')
            sevendays_weather_dict[date_data] = temp_data+ ','+desc_data
        self.logger.debug("sevendays wather info:%s", sevendays_weather_dict)

        weather_data_dict={}
        weather_data_dict['today_weather']=today_weather_info_dict
        weather_data_dict['sevendays_weather'] = sevendays_weather_dict
        self.logger.debug("wather info:%s", weather_data_dict)

        return json.dumps(weather_data_dict)

def weather_run():
    logging.config.fileConfig('log_config.conf')

    # 此处城市的天气代码获取需要时间较长，建议使用默认即可
    if not os.path.exists("citycode.xml"):
        get_citycode = GetWeatherCityCode("citycode.xml")
        get_citycode.start_runner()

    print('''请参考以下格式输入所查询的城市名:
                省-市（例：浙江-杭州（城区）），
                省-市-区（县）（例：浙江-杭州-上城），
                直辖市-区（县）（例：上海-奉贤，上海-上海（城区），
                省-市（县、区）（针对海南省））
                ''')
    print("\n请输入城市名（以回车结束）[退出请输入quit,以回车结束]：")
    city_name = input()

    while city_name != "quit":
        print("天气信息：")
        get_data = GetWeatherData("citycode.xml")
        weather_data = get_data.get_weather_info(city_name)
        if weather_data != None:
            print(json.loads(weather_data))
        else:
            print("无法获取天气信息")
        print("\n请输入城市名（以回车结束）[退出请输入quit,以回车结束]：")
        city_name = input()
    print('查询结束')

if __name__=="__main__":
    weather_run()