#include "HRDepartment.h"
#include<iostream>
using namespace std;

CHRDepartment::CHRDepartment()
{
}


CHRDepartment::~CHRDepartment()
{
}

CHRDepartment::CHRDepartment(string name):CCompany(name)
{

}
void CHRDepartment::Add(CCompany* c)
{

}
void CHRDepartment::Remove(CCompany* c)
{

}
void CHRDepartment::Display(int depth)
{
	for (int i = 0; i < depth; i++)
		cout << "-";
	cout << name << endl;
}
void CHRDepartment::LineOfDuty(void)
{
	cout << name << " Ա����Ƹ��ѵ����" << endl;
}
