#include "Country.h"

CCountry::CCountry()
{
}


CCountry::~CCountry()
{
}

CCountry::CCountry(CUnitedNations* mediator)
{
	this->mediator = mediator;
}