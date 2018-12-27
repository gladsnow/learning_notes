#pragma once
#include"Department.h"
#include"BaseClass.h"
#include"MacroDefinition.h"

class CSqlserverDepartment:public CDepartment, CBaseClass
{
public:
	CSqlserverDepartment();
	~CSqlserverDepartment();
	void Insert(CDepartment* department);
	CDepartment* GetDepartment(int id);
	
	static void* createInstance()
	{
		return new CSqlserverDepartment();
	}
	DECLARE_CLASS(CSqlserverDepartment)
};
IMPLEMENT_CLASS(CSqlserverDepartment)


class CAccessDepartment :public CDepartment, CBaseClass
{
public:
	CAccessDepartment();
	~CAccessDepartment();
	void Insert(CDepartment* department);
	CDepartment* GetDepartment(int id);
	static void* createInstance()
	{
		return new CAccessDepartment();
	}
	DECLARE_CLASS(CAccessDepartment)
};
IMPLEMENT_CLASS(CAccessDepartment)
