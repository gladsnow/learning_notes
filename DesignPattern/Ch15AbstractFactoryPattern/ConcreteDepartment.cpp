#include "ConcreteDepartment.h"
#include<iostream>
using namespace std;

CSqlserverDepartment::CSqlserverDepartment()
{
}


CSqlserverDepartment::~CSqlserverDepartment()
{
}

void CSqlserverDepartment::Insert(CDepartment* department)
{
	cout << "��SQL Server�и�Department������һ����¼" << endl;
}
CDepartment* CSqlserverDepartment::GetDepartment(int id)
{
	cout << "��SQL Server�и���ID�õ�Department��һ����¼" << endl;
	return nullptr;
}


CAccessDepartment::CAccessDepartment()
{
}


CAccessDepartment::~CAccessDepartment()
{
}

void CAccessDepartment::Insert(CDepartment* department)
{
	cout << "��Access�и�Department������һ����¼" << endl;
}
CDepartment* CAccessDepartment::GetDepartment(int id)
{
	cout << "��Access�и���ID�õ�Department��һ����¼" << endl;
	return nullptr;
}


