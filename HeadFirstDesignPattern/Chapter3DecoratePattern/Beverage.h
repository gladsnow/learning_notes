#pragma once
#include <string>
using namespace std;

class CBeverage
{
public:
	CBeverage(void);
	~CBeverage(void);

public:
	virtual string getDescription();
	virtual double cost();

public:
	string m_strDescription;
};