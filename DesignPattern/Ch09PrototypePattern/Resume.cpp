#include "Resume.h"
#include <iostream>
#include "WorkExperience.h"
using namespace std;


CResume::CResume()
{
}


CResume::~CResume()
{
}

CResume::CResume(string name)
{
	this->name = name;
}

CResume::CResume(CWorkExperience &work)
{
	this->work = work;
}
void CResume::SetPersonalInfo(string sex, string age)
{
	this->sex = sex;
	this->age = age;
}
void CResume::SetWorkExperience(string workDate, string company)
{
	work.SetWorkDate(workDate);
	work.SetCompany(company);
}
void CResume::Display(void)
{
	cout << name << " " << sex << " " << age<< endl;
	cout << "工作经历： " << work.GetWorkDate() << " " << work.GetCompany() << endl;
}

CResume* CResume::Clone()
{
	CResume *obj = new CResume(this->work);
	obj->name = this->name;
	obj->sex = this->sex;
	obj->age = this->age;
	return obj;
}


