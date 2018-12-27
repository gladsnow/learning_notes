#pragma once
#include "Beverage.h"

class CEspresso : public CBeverage
{
public:
	CEspresso(void);
	~CEspresso(void);

public:
	virtual double cost();
};

class CHouseBlend : public CBeverage
{
public:
	CHouseBlend();
	~CHouseBlend();

public:
	virtual double cost();

};