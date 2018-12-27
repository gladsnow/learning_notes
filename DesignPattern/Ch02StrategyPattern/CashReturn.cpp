#include "CashReturn.h"



CCashReturn::CCashReturn()
{
}


CCashReturn::~CCashReturn()
{
}

CCashReturn::CCashReturn(double moneyCondition, double moneyReturn)
{
	this->moneyCondition = moneyCondition;
	this->moneyReturn = moneyReturn;
}

double CCashReturn::acceptCash(double money)
{
	double result = money;
	if (money >= moneyCondition)
	{
		result = money - (int)(money / moneyCondition) * moneyReturn;
	}

	return result;
}