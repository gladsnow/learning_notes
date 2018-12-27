#include "ConcreteCmd.h"



CBakeMuttonCmd::CBakeMuttonCmd()
{
}


CBakeMuttonCmd::~CBakeMuttonCmd()
{
}

CBakeMuttonCmd::CBakeMuttonCmd(CBarbecuer *receiver):CCmd(receiver)
{

}
void CBakeMuttonCmd::ExcuteCommand(void)
{
	receiver->BakeMutton();
}
string CBakeMuttonCmd::GetCmd(void)
{
	return "¿¾ÑòÈâ´®";
}

CBakeChickenWingCmd::CBakeChickenWingCmd()
{
}


CBakeChickenWingCmd::~CBakeChickenWingCmd()
{
}

CBakeChickenWingCmd::CBakeChickenWingCmd(CBarbecuer *receiver) :CCmd(receiver)
{

}
void CBakeChickenWingCmd::ExcuteCommand(void)
{
	receiver->BakeChickenWing();
}
string CBakeChickenWingCmd::GetCmd(void)
{
	return "¿¾¼¦³á";
}