#pragma once
#include "ConcretePerson.h"

class CAction
{
public:
	CAction();
	~CAction();
	virtual void GetManConclusion(CMan* concreteElementA) = 0;
	virtual void GetWomanConclusion(CWoman* concreteElementA) = 0;
};

