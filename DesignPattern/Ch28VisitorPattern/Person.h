#pragma once
#include "Action.h"

class CPerson
{
public:
	CPerson();
	~CPerson();
	virtual void Accept(CAction* visitor) = 0;
};

