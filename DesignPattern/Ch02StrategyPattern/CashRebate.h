#pragma once
#include "CashSuper.h"
class CCashRebate :
	public CCashSuper
{
public:
	CCashRebate();
	CCashRebate(double moneyRebate);
	~CCashRebate();
	double acceptCash(double money);

private:
	double moneyRebate = 1.0f;
};

