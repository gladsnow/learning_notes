# -*- coding: UTF-8 -*-

import sys
import os
import datetime
import time

FFMPEG_EXE = u"..\\ffmpeg.exe"
FFMPEG_PARAMETERS = u"-map 0 -codec:v libx264 -codec:a aac -f ssegment \
-segment_time 10 -segment_list"


class HlsVod():
    def __init__(self,video_id,video_quality_id):
        self.video_id = video_id
        self.video_quality_id = video_quality_id

    def mkdir_ts_output_dir(self,base_output_dir):
        currrent_datetime = datetime.datetime.now()
        ts_output_dir = os.path.join(
        base_output_dir, currrent_datetime.strftime("%Y\%m\%d\%H"))
        ts_output_dir = os.path.join(ts_output_dir, str(self.video_id))
        ts_output_dir = os.path.join(ts_output_dir, str(self.video_quality_id))
        if(not os.path.exists(ts_output_dir)):
            os.makedirs(ts_output_dir)
        return ts_output_dir

    def ffmpeg_hls(self,video_path, output_file_dir):
        file_full_name = os.path.basename(video_path)
        file_name = os.path.splitext(file_full_name)[0]
        file_type = os.path.splitext(file_full_name)[1]
        #output_ts_dir = os.path.join(output_file_dir, file_name)
        if(not os.path.exists(output_file_dir)):
            os.makedirs(output_file_dir)
        m3u8_file = u"video_index.m3u8"
        output_m3u8 = output_file_dir + u"\\" + m3u8_file
        segment_file = u"output%03d.ts"
        #print(segment_file)
        output_segment_file = output_file_dir + u"\\" + segment_file

        exe_parameters = FFMPEG_EXE + " -i " + '"' + video_path + '"' + " "\
            + FFMPEG_PARAMETERS + " " + '"' + output_m3u8 + '"' + " "\
            + '"' + output_segment_file + '"'
        print exe_parameters
        return exe_parameters
        #os.system(exe_parameters.encode("GB18030"))
        print "ffmpeg_HLS()"