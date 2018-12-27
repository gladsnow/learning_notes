#include "CashContext.h"
#include "CashNormal.h"
#include "CashRebate.h"
#include "CashReturn.h"

CCashContext::CCashContext()
{
}


CCashContext::~CCashContext()
{
}

CCashContext::CCashContext(int type)
{
	this->cs = nullptr;
	switch (type)
	{
	case 1:
		cs = new CCashNormal();
		break;
	case 2:
		cs = new CCashReturn(300,100);
		break;
	case 3:
		cs = new CCashRebate(0.8);
		break;
	default:
		break;
	}
}

double CCashContext::GetResult(double money)
{
	return cs->acceptCash(money);
}