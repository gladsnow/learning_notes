#pragma once
#include<string>
#include"WorkExperience.h"
using namespace std;

class CResume
{
public:
	CResume();
	~CResume();
	CResume(string name);
	void SetPersonalInfo(string sex, string age);
	void SetWorkExperience(string timeArea, string company);
	void Display(void);
	CResume* Clone(void);
private:
	CResume(CWorkExperience& work);
	string name;
	string sex;
	string age;
	CWorkExperience work;
};

