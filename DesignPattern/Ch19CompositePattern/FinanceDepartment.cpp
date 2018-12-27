#include "FinanceDepartment.h"
#include<iostream>
using namespace std;

CFinanceDepartment::CFinanceDepartment()
{
}


CFinanceDepartment::~CFinanceDepartment()
{
}

CFinanceDepartment::CFinanceDepartment(string name) :CCompany(name)
{

}
void CFinanceDepartment::Add(CCompany* c)
{

}
void CFinanceDepartment::Remove(CCompany* c)
{

}
void CFinanceDepartment::Display(int depth)
{
	for (int i = 0; i < depth; i++)
		cout << "-";
	cout << name << endl;
}
void CFinanceDepartment::LineOfDuty(void)
{
	cout << name << " 公司财务收支管理" << endl;
}