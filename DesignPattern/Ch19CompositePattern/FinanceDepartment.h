#pragma once
#include "Company.h"
#include<string>
using namespace std;

class CFinanceDepartment :
	public CCompany
{
public:
	CFinanceDepartment();
	~CFinanceDepartment();
	CFinanceDepartment(string name);
	void Add(CCompany* c);
	void Remove(CCompany* c);
	void Display(int depth);
	void LineOfDuty(void);
};

