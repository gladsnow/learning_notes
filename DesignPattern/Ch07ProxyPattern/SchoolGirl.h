#pragma once
#include<string>
using namespace std;
class CSchoolGirl
{
public:
	CSchoolGirl();
	~CSchoolGirl();
	string GetName(void);
	void Setname(string value);
private:
	string name;
};

