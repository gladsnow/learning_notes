#pragma once
#include"BaseClass.h"

class CDataAccess
{	
public:
	CDataAccess();
	~CDataAccess();
	CBaseClass* CreateDepartment(string AccessName);
	CBaseClass* CreateUser(string AccessName);

};

