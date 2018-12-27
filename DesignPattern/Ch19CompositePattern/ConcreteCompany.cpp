#include "ConcreteCompany.h"
#include<iostream>
using namespace std;

CConcreteCompany::CConcreteCompany()
{
}


CConcreteCompany::~CConcreteCompany()
{
}

CConcreteCompany::CConcreteCompany(string name):CCompany(name)
{
	children = new list<CCompany*>();
}
void CConcreteCompany::Add(CCompany* c)
{

	children->push_back(c);
}
void CConcreteCompany::Remove(CCompany *c)
{
	children->remove(c);
}
void CConcreteCompany::Display(int depth)
{
	for (int i = 0; i < depth; i++)
		cout << "-";
	cout << name << endl;

		list<CCompany*>::iterator iter;
		for (iter = children->begin(); iter != children->end(); iter++)
		{
			(*iter)->Display(depth + 2);
		}	
}
void CConcreteCompany::LineOfDuty(void)
{
	list<CCompany*>::iterator iter;
	for (iter = children->begin(); iter != children->end(); iter++)
	{
		(*iter)->LineOfDuty();
	}
}