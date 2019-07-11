# -*- coding: UTF-8 -*-

import sys
import os
import urllib2
import json

GLOBAL_HEADERS = {"Accept": "application/json",
                  "Content-Type": "application/json"}
GLOBAL_GET_VIDEO_LIST_URL = "/api/v1/admin/tasks"
GLOBAL_GET_VIDEO_LIST_DATA = {"state": 0}
GLOBAL_UPDATE_VIDEO_STATUS_URL = "/api/v1/admin/task_status/"

class HttpClient():
    def __init__(self,base_http_url):
        self.base_http_url = base_http_url

    def get_video_list(self):
        request_url = self.base_http_url + GLOBAL_GET_VIDEO_LIST_URL
        request_data_json = json.dumps(GLOBAL_GET_VIDEO_LIST_DATA)
        req = urllib2.Request(request_url, request_data_json, GLOBAL_HEADERS)
        response = urllib2.urlopen(req)
        return json.loads(response.read())

    def update_video_status(self, task_id, status):
        request_url = self.base_http_url + GLOBAL_UPDATE_VIDEO_STATUS_URL + task_id
        request_data = {"state": 0}
        request_data["state"] = status
        request_data_json = json.dumps(request_data)
        req = urllib2.Request(request_url, request_data_json, GLOBAL_HEADERS)
        response = urllib2.urlopen(req)