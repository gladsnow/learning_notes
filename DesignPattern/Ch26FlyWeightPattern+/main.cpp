#include"WebSiteFactory.h"
#include"WebSite.h"
#include<iostream>
using namespace std;

int main(void)
{
	CWebSiteFactory* f = new CWebSiteFactory();

	CWebSite* fx = f->GetWebSiteCategory("产品展示");
	fx->Use(new CUser("xiaocai"));

	CWebSite* fx = f->GetWebSiteCategory("产品展示");
	fx->Use(new CUser("BigBird"));

	CWebSite* fx = f->GetWebSiteCategory("产品展示");
	fx->Use(new CUser("jiaojiao"));

	CWebSite* fx = f->GetWebSiteCategory("blog");
	fx->Use(new CUser("laowantong"));

	CWebSite* fx = f->GetWebSiteCategory("blog");
	fx->Use(new CUser("liuxian"));

	CWebSite* fx = f->GetWebSiteCategory("blog");
	fx->Use(new CUser("nanhai"));

	cout << "得到网站分类总数为 " << f->GetWebSiteCount() << endl;

	return 0;
}