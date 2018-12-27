#include"WebSiteFactory.h"
#include"WebSite.h"
#include<iostream>
using namespace std;

int main(void)
{
	CWebSiteFactory* f = new CWebSiteFactory();

	CWebSite* fx = f->GetWebSiteCategory("��Ʒչʾ");
	fx->Use(new CUser("xiaocai"));

	CWebSite* fx = f->GetWebSiteCategory("��Ʒչʾ");
	fx->Use(new CUser("BigBird"));

	CWebSite* fx = f->GetWebSiteCategory("��Ʒչʾ");
	fx->Use(new CUser("jiaojiao"));

	CWebSite* fx = f->GetWebSiteCategory("blog");
	fx->Use(new CUser("laowantong"));

	CWebSite* fx = f->GetWebSiteCategory("blog");
	fx->Use(new CUser("liuxian"));

	CWebSite* fx = f->GetWebSiteCategory("blog");
	fx->Use(new CUser("nanhai"));

	cout << "�õ���վ��������Ϊ " << f->GetWebSiteCount() << endl;

	return 0;
}