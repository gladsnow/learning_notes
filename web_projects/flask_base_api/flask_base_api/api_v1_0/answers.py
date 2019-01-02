# -*- coding: utf-8 -*-

from flask import request,jsonify
from . import api_v1_0
from ..database.models import Users
from .auth import token_auth
from manager import db

@api_v1_0.route('/<user_name>/answers',methods = ['POST'])
@token_auth.login_required
def add_answers(user_name):
    pass

@api_v1_0.route('/<user_name>/answers',methods = ['GET'])
@token_auth.login_required
def get_answers(user_name):
    pass

@api_v1_0.route('/<user_name>/answers/<int:answer_id>',methods = ['DELETE'])
@token_auth.login_required
def del_answers(user_name,answer_id):
    pass