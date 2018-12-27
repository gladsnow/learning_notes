#pragma once
#include"UnitedNations.h"

class CUnitedNations;
class CCountry
{
public:
	CCountry();
	~CCountry();
	CCountry(CUnitedNations* mediator);
protected:
	CUnitedNations* mediator;
};

