#pragma once
#include "CashSuper.h"
class CCashNormal:public CCashSuper
{
public:
	CCashNormal();
	~CCashNormal();
	double acceptCash(double money);
};

