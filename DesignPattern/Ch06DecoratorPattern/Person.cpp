#include "Person.h"
#include<iostream>
using namespace std;

CPerson::CPerson()
{
}


CPerson::~CPerson()
{
}

CPerson::CPerson(string name)
{
	this->name = name;
}

void CPerson::Show(void)
{
	cout << "×°°çµÄ" << name << endl;
}
