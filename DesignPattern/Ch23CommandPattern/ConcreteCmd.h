#pragma once
#include "Cmd.h"
class CBakeMuttonCmd :
	public CCmd
{
public:
	CBakeMuttonCmd();
	~CBakeMuttonCmd();
	CBakeMuttonCmd(CBarbecuer *receiver);
	void ExcuteCommand(void);
	string GetCmd(void);
};

class CBakeChickenWingCmd :
	public CCmd
{
public:
	CBakeChickenWingCmd();
	~CBakeChickenWingCmd();
	CBakeChickenWingCmd(CBarbecuer *receiver);
	void ExcuteCommand(void);
	string GetCmd(void);
};

