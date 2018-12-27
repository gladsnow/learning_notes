#include "DataAccess.h"
#include<iostream>
#include"MacroDefinition.h"
using namespace std;


CDataAccess::CDataAccess()
{
}


CDataAccess::~CDataAccess()
{
}
CBaseClass* CDataAccess::CreateDepartment(string AccessName)
{
	CBaseClass *pVar = (CBaseClass*)CReflectionFactory::sharedClassFactory().getClassByName(AccessName);
	return pVar;
}

CBaseClass* CDataAccess::CreateUser(string AccessName)
{
	CBaseClass *pVar = (CBaseClass*)CReflectionFactory::sharedClassFactory().getClassByName(AccessName);
	return pVar;
}