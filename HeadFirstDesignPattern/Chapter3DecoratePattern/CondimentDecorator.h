#pragma once
#include "Beverage.h"
class CCondimentDecorator : public CBeverage
{
public:
	CCondimentDecorator(void);
	~CCondimentDecorator(void);

public:
	virtual string getDescription();
};

class CMocha : public CCondimentDecorator
{
public:
	CMocha();
	CMocha(CBeverage* beverage);
	~CMocha();

public:
	virtual string getDescription();
	virtual double cost();

public:
	CBeverage* m_beverage;

};
