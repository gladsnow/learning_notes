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
	cout << "��վ���ࣺ" << this->name << "�û�: " << user->GetName() << endl;
}

