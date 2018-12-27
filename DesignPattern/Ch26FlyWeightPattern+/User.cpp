#include "User.h"



CUser::CUser()
{
}


CUser::~CUser()
{
}
CUser::CUser(string name)
{
	this->name = name;
}
string CUser::GetName(void)
{
	return name;
}
