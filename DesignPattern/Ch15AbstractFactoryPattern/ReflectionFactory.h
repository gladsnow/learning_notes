#pragma once
#include<string>
#include <map>
using namespace std;

typedef void* (*createClass)(void);

class CReflectionFactory
{
public:
	CReflectionFactory();
	virtual ~CReflectionFactory();

	void* getClassByName(string className);

	void registClass(string name, createClass method);

	static CReflectionFactory& sharedClassFactory();

private:
	std::map<string, createClass> m_classMap;

};

