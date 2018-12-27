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
	cout << "在SQL Server中给Department表增加一条记录" << endl;
}
CDepartment* CSqlserverDepartment::GetDepartment(int id)
{
	cout << "在SQL Server中根据ID得到Department表一条记录" << endl;
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
	cout << "在Access中给Department表增加一条记录" << endl;
}
CDepartment* CAccessDepartment::GetDepartment(int id)
{
	cout << "在Access中根据ID得到Department表一条记录" << endl;
	return nullptr;
}


