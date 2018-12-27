#pragma once
#include "CashSuper.h"
class CCashReturn :
	public CCashSuper
{
public:
	CCashReturn();
	~CCashReturn();
	CCashReturn(double moneyCondition,double moneyReturn);
	double acceptCash(double money);
private:
	double moneyCondition = 0.0f;
	double moneyReturn = 0.0f;
};

