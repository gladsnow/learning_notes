# -*- coding: utf-8 -*-

from flask import request,jsonify
from . import api_v1_0
from ..database.models import Users
from .auth import token_auth
from manager import db

@api_v1_0.route('/<user_name>/topics/<int:topic_id>',methods = ['POST'])
@token_auth.login_required
def follow_topics(user_name,topic_id):
    pass

@api_v1_0.route('/<user_name>/topics',methods = ['GET'])
@token_auth.login_required
def get_topics(user_name):
    pass

@api_v1_0.route('/<user_name>/topics/<int:topic_id>',methods = ['DELETE'])
@token_auth.login_required
def unfollow_topics(user_name,topic_id):
    pass
