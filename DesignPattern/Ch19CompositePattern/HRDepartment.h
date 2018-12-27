#pragma once
#include "Company.h"
#include<string>
using namespace std;

class CHRDepartment:public CCompany
{
public:
	CHRDepartment();
	~CHRDepartment();
	CHRDepartment(string name);
	void Add(CCompany* c);
	void Remove(CCompany* c);
	void Display(int depth);
	void LineOfDuty(void);
};

