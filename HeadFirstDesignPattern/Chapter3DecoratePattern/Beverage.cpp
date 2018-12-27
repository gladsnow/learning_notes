#include "Beverage.h"


CBeverage::CBeverage(void)
{
	m_strDescription = "Unknown Beverage";
}


CBeverage::~CBeverage(void)
{
}

string CBeverage::getDescription()
{
	return m_strDescription;
}
double CBeverage::cost()
{
	return 0;
}