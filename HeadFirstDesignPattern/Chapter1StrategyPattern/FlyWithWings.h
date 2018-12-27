#pragma once
#include "FlyBehavior.h"
#include<iostream>

using namespace std;

class CFlyWithWings : public CFlyBehavior
{
public:
	CFlyWithWings(void);
	~CFlyWithWings(void);

public:
	virtual	void fly();
};

class CFlyNoWay : public CFlyBehavior
{
public:
	CFlyNoWay(void);
	~CFlyNoWay(void);

public:
	virtual	void fly();
};

class CFlyRocketPowered : public CFlyBehavior
{
public:
	CFlyRocketPowered();
	~CFlyRocketPowered();

public:
	void fly();
};

