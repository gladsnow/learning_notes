#pragma once
#include"Product.h"
class CBuilder
{
public:
	CBuilder();
	~CBuilder();
	virtual void BuildPartA(void) = 0;
	virtual void BuildPartB(void) = 0;
	virtual CProduct* GetResult(void) = 0;
};