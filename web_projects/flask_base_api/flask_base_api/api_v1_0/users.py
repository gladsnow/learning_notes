# -*- coding: utf-8 -*-

import datetime
from flask import request,jsonify
from werkzeug.security import generate_password_hash
from . import api_v1_0
from ..database.models import Users
from .auth import token_auth
from manager import db
from ..email import send_email

@api_v1_0.route('/users',methods = ['POST'])
def new_user():
    email = request.values.get('email')
    username = request.values.get('username')
    password = request.values.get('password')

    if email is None or username is None or password is None:
        return jsonify({'message':'Incomplete parameters'})
    elif ((email.strip() == '') or (username.strip() == '') or (password.strip() == '')):
        return jsonify({'message':'Invalid parameters'})
    elif Users.query.filter_by(primary_email=email).first() is not None:
        return jsonify({'message':'Eamil has existed'})
    elif Users.query.filter_by(user_name=username).first() is not None:
        return jsonify({'message':'Username has existed'})
    
    new_user = Users(primary_email = email,user_name = username,
        password_hash = generate_password_hash(password,method='pbkdf2:sha1', salt_length=8),
        create_time = datetime.datetime.now(),update_time = datetime.datetime.now())
    db.session.add(new_user)
    db.session.commit()
    #send_email(email, 'Register Success', 'auth/email/register_email',"")
    return jsonify({'message':'Register OK'})

@api_v1_0.route('/users',methods = ['DELETE'])
@token_auth.login_required
def del_user():
    email = request.values.get('email')
    if email is None or email.strip() == '':
        return jsonify({'message':'Invalid parameters'})
    
    user_info = Users.query.filter_by(primary_email = email).first()
    if user_info is None:
        return jsonify({'message':'Delete a user failed'})
    db.session.delete(user_info)
    db.session.commit()
    return jsonify({'message':'Delete a user sucess'})

@api_v1_0.route('/<user_name>/setting/email',methods = ['UPDATE'])
@token_auth.login_required
def update_email():
    pass

@api_v1_0.route('/<user_name>/setting/password',methods = ['UPDATE'])
@token_auth.login_required
def update_password():
    pass