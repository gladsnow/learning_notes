#include<iostream>
#include<string>
#include"Resume.h"
using namespace std;

int main(void)
{
	CResume a("����");
	a.SetPersonalInfo("��", "29");
	a.SetWorkExperience("1998-2000", "xxx��˾");

	CResume* b = a.Clone();
	b->SetWorkExperience("1998-2006", "yyy��ҵ");

	CResume* c = a.Clone();
	c->SetPersonalInfo("��", "24");
	c->SetWorkExperience("1998-2003", "zzz��ҵ");


	a.Display();
	b->Display();
	c->Display();

	return 0;
}