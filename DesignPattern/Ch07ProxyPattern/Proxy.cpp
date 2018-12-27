#include "Proxy.h"



CProxy::CProxy()
{
}


CProxy::~CProxy()
{
}

CProxy::CProxy(CSchoolGirl *mm)
{
	gg = new CPursuit(mm);
}

void CProxy::GiveDolls(void)
{
	gg->GiveDolls();
}

void CProxy::GiveFlowers(void)
{
	gg->GiveFlowers();
}

void CProxy::GiveChocolate(void)
{
	gg->GiveChocolate();
}
