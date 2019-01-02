# -*- coding: utf-8 -*-
from flask import current_app
from manager import db
import datetime

class Users(db.Model):
    '''db table: t_user'''
    __tablename__ = 't_user'
    id = db.Column(db.Integer, primary_key = True)
    primary_email = db.Column(db.String(64), unique=True, nullable=False)
    user_name = db.Column(db.String(32), unique=True, nullable=False)
    password_hash = db.Column(db.String(128),nullable=False)
    email_confirmed = db.Column(db.Boolean,default=False)
    create_time = db.Column(db.DateTime)
    update_time = db.Column(db.DateTime)

