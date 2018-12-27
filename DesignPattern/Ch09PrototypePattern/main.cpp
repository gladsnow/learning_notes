#include<iostream>
#include<string>
#include"Resume.h"
using namespace std;

int main(void)
{
	CResume a("大鸟");
	a.SetPersonalInfo("男", "29");
	a.SetWorkExperience("1998-2000", "xxx公司");

	CResume* b = a.Clone();
	b->SetWorkExperience("1998-2006", "yyy企业");

	CResume* c = a.Clone();
	c->SetPersonalInfo("男", "24");
	c->SetWorkExperience("1998-2003", "zzz企业");


	a.Display();
	b->Display();
	c->Display();

	return 0;
}