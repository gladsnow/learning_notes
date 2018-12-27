#pragma once
#include"WebSite.h"
#include<map>
using namespace std;
class CWebSiteFactory
{
public:
	CWebSiteFactory();
	~CWebSiteFactory();
	CWebSite* GetWebSiteCategory(string key);
	int GetWebSiteCount(void);

private:
	map<string, CConcreteWebSite*> flyweights;
};

