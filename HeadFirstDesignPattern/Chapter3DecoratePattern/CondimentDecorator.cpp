#include "CondimentDecorator.h"


CCondimentDecorator::CCondimentDecorator(void)
{
}


CCondimentDecorator::~CCondimentDecorator(void)
{
}

string CCondimentDecorator::getDescription()
{
	return"";
}

CMocha::CMocha()
{

}

CMocha::CMocha(CBeverage* beverage)
{
	this->m_beverage = beverage;
}

CMocha::~CMocha()
{

}

string CMocha::getDescription()
{
	return m_beverage->getDescription() + ", Mocha";
}

double CMocha::cost()
{
	return 0.20 + m_beverage->cost();
}
