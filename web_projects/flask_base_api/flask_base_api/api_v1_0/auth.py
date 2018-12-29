# -*- coding: utf-8 -*-

from flask import request,jsonify,current_app
from flask_httpauth import HTTPBasicAuth, HTTPTokenAuth, MultiAuth
from werkzeug.security import check_password_hash
from itsdangerous import TimedJSONWebSignatureSerializer as Serializer
from . import api_v1_0
from ..database.models import Users

base_auth = HTTPBasicAuth()
token_auth = HTTPTokenAuth(scheme='Bearer')
multi_auth = MultiAuth(base_auth,token_auth)

def generate_auth_token(id,expiration=600):
        s = Serializer(current_app.config['SECRET_KEY'], expiration)
        return s.dumps({'id': id}).decode('utf-8')

@api_v1_0.route('/authorizations',methods = ['POST'])
def authorization():
    email = request.values.get('email')
    password = request.values.get('password')

    if email is None or password is None or (email.strip() == '') or (password.strip() == ''):
        return jsonify({'message':'Invaild parameters'})

    user_data = Users.query.filter_by(primary_email=email).first()
    if(user_data is not None and (check_password_hash(user_data.password_hash,password))):
        auth_token = generate_auth_token(id = user_data.id)
        return jsonify({'message':'Authorization success','token':auth_token})
    else:
        return jsonify({'message':'Authorization failed'})

@base_auth.verify_password
def verify_password(username,password):


@token_auth.verify_token
def verify_token(token):
