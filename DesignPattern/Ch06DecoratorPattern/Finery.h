#pragma once
#include "Person.h"
class CFinery :
	public CPerson
{
public:
	CFinery();
	~CFinery();
	void Decorate(CPerson* component);
	void Show(void);
protected:
	CPerson* component;
};

