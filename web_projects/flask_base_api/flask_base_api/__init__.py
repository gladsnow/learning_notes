# -*- coding: utf-8 -*-

import os
from flask import Flask
from .api_v1_0 import api_v1_0 as api_v1_0_bp


def create_app(config_file = None):
    '''Create and configure the app'''
    app=Flask(__name__)
    app.config.from_pyfile(config_file,silent = False)
    app.register_blueprint(api_v1_0_bp, url_prefix ='/api-v1-0')
    return app