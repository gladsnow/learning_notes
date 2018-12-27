#include "CashRebate.h"



CCashRebate::CCashRebate()
{

}
CCashRebate::CCashRebate(double moneyRebate)
{
	 this->moneyRebate = moneyRebate;
}

CCashRebate::~CCashRebate()
{
}

double CCashRebate::acceptCash(double money)
{
	return money * moneyRebate;
}
