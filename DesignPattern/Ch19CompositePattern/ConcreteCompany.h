#pragma once
#include "Company.h"
#include<list>
#include<string>
using namespace std;
class CConcreteCompany:public CCompany
{
public:
	CConcreteCompany();
	~CConcreteCompany();
	CConcreteCompany(string name);
	void Add(CCompany* c);
	void Remove(CCompany* c);
	void Display(int depth);
	void LineOfDuty(void);

private:
	list<CCompany*>* children;
};

