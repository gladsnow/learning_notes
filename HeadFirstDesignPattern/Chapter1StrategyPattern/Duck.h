#pragma once
#include <iostream>
#include "FlyBehavior.h"
#include "QuackBehavior.h"

using namespace std;

class CDuck
{
public:
	virtual void display() = 0;
	void performFly();
	void performQuack();
	void swim();
	void setFlyBehavior(CFlyBehavior* fb);
	void setQuackBehavior(CQuackBehavior* qb);

public:
	CFlyBehavior* m_flyBehavior;
	CQuackBehavior* m_quackBehavior;
};


