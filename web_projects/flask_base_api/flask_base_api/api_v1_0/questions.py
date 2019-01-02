# -*- coding: utf-8 -*-

from flask import request,jsonify
from . import api_v1_0
from ..database.models import Users
from .auth import token_auth
from manager import db

@api_v1_0.route('/<user_name>/questions',methods = ['POST'])
@token_auth.login_required
def add_questions(user_name):
    pass

@api_v1_0.route('/<user_name>/questions',methods = ['GET'])
@token_auth.login_required
def get_questions(user_name):
    pass

@api_v1_0.route('/<user_name>/questions/<int:question_id>',methods = ['DELETE'])
@token_auth.login_required
def del_questions(user_name,question_id):
    pass