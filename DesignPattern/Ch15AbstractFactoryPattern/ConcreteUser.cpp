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
	cout << "在SQL Server中给User表增加一条记录" << endl;
}

CUser* CSqlserverUser::GetUser(int id)
{
	cout << "在SQL Server中根据ID得到User表一条记录" << endl;
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
	cout << "在Access中给User表增加一条记录" << endl;
}

CUser* CAccessUser::GetUser(int id)
{
	cout << "在Access中根据ID得到User表一条记录" << endl;
	return nullptr;
}