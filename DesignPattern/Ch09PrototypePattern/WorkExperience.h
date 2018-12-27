#pragma once
#include<string>
using namespace std;

class CWorkExperience
{
public:
	CWorkExperience();
	~CWorkExperience();
	void SetWorkDate(string value);
	string GetWorkDate(void);
	void SetCompany(string value);
	string GetCompany(void);
private:
	string workDate;
	string company;
};

