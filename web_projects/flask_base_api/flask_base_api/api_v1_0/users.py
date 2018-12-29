# -*- coding: utf-8 -*-

import datetime
from flask import request,jsonify
from werkzeug.security import generate_password_hash
from . import api_v1_0
from ..database.models import Users
from manager import db

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
        return jsonify({'message':'username has existed'})
    
    new_user = Users(primary_email = email,user_name = username,
        password_hash = generate_password_hash(password,method='pbkdf2:sha1', salt_length=8),
        create_time = datetime.datetime.now(),update_time = datetime.datetime.now())
    db.session.add(new_user)
    db.session.commit()
    return jsonify({'message':'Register OK'})


