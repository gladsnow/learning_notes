#pragma once
#include "Person.h"

class CMan :
	public CPerson
{
public:
	CMan();
	~CMan();
	void Accept(CAction* visitor);
};

class CWoman :
	public CPerson
{
public:
	CWoman();
	~CWoman();
	void Accept(CAction* visitor);
};
