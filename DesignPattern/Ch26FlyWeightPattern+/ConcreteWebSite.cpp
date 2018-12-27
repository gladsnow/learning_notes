#include "ConcreteWebSite.h"
#include<iostream>
using namespace std;

CConcreteWebSite::CConcreteWebSite()
{
}


CConcreteWebSite::~CConcreteWebSite()
{
}

CConcreteWebSite::CConcreteWebSite(string name)
{
	this->name = name;
}
void CConcreteWebSite::Use(CUser* user)
{
	cout << "网站分类：" << this->name << "用户: " << user->GetName() << endl;
}

