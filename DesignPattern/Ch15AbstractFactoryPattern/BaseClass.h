#pragma once
#include<string>
#include<map>
#include"DynamicCreateClass.h"
#include"MacroDefinition.h"
#include"Department.h"
#include"User.h"
using namespace std;

class CBaseClass;
typedef void(*setValue)(CBaseClass *t, void* c);

class CBaseClass
{
public:
	CBaseClass();
	~CBaseClass();
	static void* createInstance() 
	{
		return new CBaseClass();
	}
	//virtual void registProperty();
	//virtual void display();
	virtual void Insert(CDepartment* department);
	virtual CDepartment* GetDepartment(int id);
	virtual void Insert(CUser* user);
	virtual CUser* GetUser(int id);
	map<string, setValue> m_propertyMap;
};


