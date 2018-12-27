#include "Cmd.h"



CCmd::CCmd()
{
}


CCmd::~CCmd()
{
}
CCmd::CCmd(CBarbecuer* receiver)
{
	this->receiver = receiver;
}
