#include "ConcreteUser.h"
#include<iostream>
using namespace std;

CSqlserverUser::CSqlserverUser()
{
}


CSqlserverUser::~CSqlserverUser()
{
}

void CSqlserverUser::Insert(CUser* user)
{
	cout << "��SQL Server�и�User������һ����¼" << endl;
}

CUser* CSqlserverUser::GetUser(int id)
{
	cout << "��SQL Server�и���ID�õ�User��һ����¼" << endl;
	return nullptr;
}

CAccessUser::CAccessUser()
{
}


CAccessUser::~CAccessUser()
{
}

void CAccessUser::Insert(CUser* uer)
{
	cout << "��Access�и�User������һ����¼" << endl;
}

CUser* CAccessUser::GetUser(int id)
{
	cout << "��Access�и���ID�õ�User��һ����¼" << endl;
	return nullptr;
}