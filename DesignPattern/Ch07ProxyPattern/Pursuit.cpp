#include "Pursuit.h"
#include<iostream>
using namespace std;

CPursuit::CPursuit()
{
}


CPursuit::~CPursuit()
{
}

CPursuit::CPursuit(CSchoolGirl *mm)
{
	this->mm = mm;
}

void CPursuit::GiveDolls(void)
{
	cout << mm->GetName() << " ����������" << endl;
}

void CPursuit::GiveFlowers(void)
{
	cout << mm->GetName() << " �����ʻ�" << endl;
}

void CPursuit::GiveChocolate(void)
{
	cout << mm->GetName() << " �����ɿ���" << endl;
}

