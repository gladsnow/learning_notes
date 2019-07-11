# -*- coding: UTF-8 -*-

import sys
import os
import ConfigParser
import json
import threading
import subprocess
import time

from http_client import HttpClient
from hls_vod import HlsVod

video_list=[]
condition = threading.Condition()

#################### Main Entry################
def read_configure():
    conf = ConfigParser.ConfigParser()
    print("Read configure...")
    conf.read("..\config.ini")

    input_base_dir = conf.get("VIDEO_PATH", "input_dir")
    output_base_dir = conf.get("VIDEO_PATH", "output_dir")

    base_http_url = conf.get("HTTP_PARAMETERS", "base_http_url")
    return input_base_dir,output_base_dir,base_http_url

class HttpThread(threading.Thread):
    def __init__(self,base_http_url):
        threading.Thread.__init__(self)
        self.base_http_url = base_http_url

    def run(self):
        http_client = HttpClient(self.base_http_url)
        condition.acquire()
        while True :
            print "HttpThread"
            program_list = http_client.get_video_list()
            #print "program_list:",program_list
            #print "len:",len(program_list)
            if (len(program_list) <= 1):
               print 'continue'
               time.sleep(20)
               continue

            del video_list[:]
            for index in range(len(program_list["data"])):
                video_dict = {}
                video_dict["in_stream_path"] = (program_list["data"])[index][
                    "paraminfo"]["hls_raw_stream_file_path"]["in_stream_path"]
                video_dict["out_stream_path"] = (program_list["data"])[index][
                    "paraminfo"]["hls_raw_stream_file_path"]["out_stream_path"]
                video_dict["hls_program_quanlity"] = (program_list["data"])[index][
                    "paraminfo"]["programe_param"][0]["hls_hrograme_quanlity"]
                video_dict["task_id"] = (program_list["data"])[index]["task_id"]
                vidoe_dict["hls_program_type"] = (program_list["data"])[index][
                    "paraminfo"]["hls_programe_type"]
                video_list.append(video_dict)
            #print 'video len=',len(video_list)
            #print video_list
            if(len(video_list) > 0):
                print "http wait"
                condition.notify()
                condition.wait()

        condition.release()

class HlsVideoThread(threading.Thread):
    """docstring for ClassName"""
    def __init__(self,input_base_dir, output_base_dir,base_http_url):
        threading.Thread.__init__(self)
        self.output_base_dir = output_base_dir
        self.input_base_dir = input_base_dir
        self.base_http_url = base_http_url

    def run(self):
        http_client = HttpClient(self.base_http_url)
        condition.acquire()
        while True :
            print "HlsVideoThread"
            if(len(video_list) <= 0):
                print "hls wait"
                condition.notify()
                condition.wait()

            i = 0
            if(video_list[i]["hls_program_type"] == 0):
                hls_video = HlsVod(video_list[i]["task_id"], video_list[i][
                        "hls_program_quanlity"])
                tmp_output_dir = self.output_base_dir + video_list[i]["out_stream_path"]
                ts_output_dir = hls_video.mkdir_ts_output_dir(tmp_output_dir)
                input_video = self.input_base_dir + video_list[i]["in_stream_path"]
                child = subprocess.Popen(hls_video.ffmpeg_hls(input_video,ts_output_dir)
                        ,shell=False,stdout=subprocess.PIPE)
                child.wait()
                
                print 'return_code=',child.returncode
                print "len=",len(video_list)
                print 'task_id',video_list[i]["task_id"]
                if(child.returncode == 0):
                        http_client.update_video_status(video_list[i]["task_id"],3)
                else :
                        http_client.update_video_status(video_list[i]["task_id"],4)
                if(len(video_list) > 0):
                    del video_list[i]
                print "len2=",len(video_list)

        condition.release()
   
        
def main():

    [input_base_dir,output_base_dir,base_http_url] = read_configure()

    if (not os.path.exists(input_base_dir)) \
            or (not os.path.exists(output_base_dir)):
        print("No file or directory exists.")
        sys.exit()
    http_thread = HttpThread(base_http_url)
    hls_thread = HlsVideoThread(input_base_dir,output_base_dir,base_http_url)
    http_thread.start()
    hls_thread.start()
    
    print "All things done"


if __name__ == '__main__':
    main()
