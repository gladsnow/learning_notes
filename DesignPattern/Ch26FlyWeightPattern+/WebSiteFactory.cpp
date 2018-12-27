#include "WebSiteFactory.h"
#include "ConcreteWebSite.h"
#include "WebSite.h"

CWebSiteFactory::CWebSiteFactory()
{
//	flyweights = new map<string, CConcreteWebSite*>();
}


CWebSiteFactory::~CWebSiteFactory()
{
}

CWebSite* CWebSiteFactory::GetWebSiteCategory(string key)
{
	if (flyweights.key_comp)
	{
		CConcreteWebSite* tmp =  new CConcreteWebSite();
		flyweights.insert(key,tmp);
	}
	return ((CWebSite*)flyweights[key]);
}
int CWebSiteFactory::GetWebSiteCount(void)
{
	return flyweights.size();
}