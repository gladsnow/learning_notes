#pragma once
#include "CashSuper.h"
class CCashContext
{
public:
	CCashContext();
	~CCashContext();
	CCashContext(int type);
	double GetResult(double money);

private:
	CCashSuper *cs;
};

