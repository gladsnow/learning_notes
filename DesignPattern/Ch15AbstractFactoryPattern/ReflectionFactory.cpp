#include "ReflectionFactory.h"


CReflectionFactory::CReflectionFactory()
{
}


CReflectionFactory::~CReflectionFactory()
{
}

void* CReflectionFactory::getClassByName(string className)
{
	map<string, createClass>::const_iterator iter;

	iter = m_classMap.find(className);
	if (iter == m_classMap.end())
		return NULL;
	else
		return iter->second();
}

void CReflectionFactory::registClass(string name, createClass method)
{
	m_classMap.insert(pair<string, createClass>(name, method));
}

CReflectionFactory& CReflectionFactory::sharedClassFactory()
{
	static CReflectionFactory _sharedClassFactory;
	return _sharedClassFactory;
}
