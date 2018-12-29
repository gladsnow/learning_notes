# -*- coding: utf-8 -*-

import os
from flask_base_api.__init__ import create_app
from flask_script import Manager,Shell
from flask_sqlalchemy import SQLAlchemy

current_dir = os.path.abspath(os.path.dirname(__file__))

app = create_app(current_dir+'\\configure\\dev_config.py')
db = SQLAlchemy(app)
manager = Manager(app)

def make_shell_context():
    return dict(app=app)

manager.add_command("shell",Shell(make_context = make_shell_context))

if __name__ == '__main__':
    manager.run()