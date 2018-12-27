#pragma once
#include<string>
using namespace std;
class CCompany
{
public:
	CCompany();
	~CCompany();
	CCompany(string name);
	virtual void Add(CCompany *c) = 0;
	virtual	void Remove(CCompany *c) = 0;
	virtual void Display(int depth) = 0;
	virtual void LineOfDuty(void) = 0;

protected:
	string name;
};

