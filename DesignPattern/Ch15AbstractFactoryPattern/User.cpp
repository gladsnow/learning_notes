#include "User.h"



CUser::CUser()
{
}


CUser::~CUser()
{
}

int CUser::GetID(void)
{
	return _id;
}
void CUser::SetID(int value)
{
	_id = value;
}
string CUser::GetName(void)
{
	return _name;
}
void CUser::SetName(string value)
{
	_name = value;
}