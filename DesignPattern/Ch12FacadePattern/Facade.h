#pragma once
#include "SubSystem.h"
#include<iostream>
using namespace std;

class CFacade
{
public:
	CFacade();
	~CFacade();
	void MethodA(void);
	void MethodB(void);

private:
	CSubSystemOne* one;
	CSubSystemTwo* two;
	CSubSystemThree* three;
	CSubSystemFour* four;

};

