#pragma once
#include "Barbecuer.h"
#include <string>
using namespace std;
class CCmd
{
public:
	CCmd();
	~CCmd();
	CCmd(CBarbecuer* receiver);
	virtual void ExcuteCommand(void) = 0;
	virtual string GetCmd(void) = 0;
protected:
	CBarbecuer* receiver;
};

