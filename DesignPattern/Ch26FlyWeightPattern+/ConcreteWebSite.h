#pragma once
#include "WebSite.h"
#include<string>
using namespace std;
class CConcreteWebSite :
	public CWebSite
{
public:
	CConcreteWebSite();
	~CConcreteWebSite();
	CConcreteWebSite(string name);
	void Use(CUser* user);
private:
	string name;
};

