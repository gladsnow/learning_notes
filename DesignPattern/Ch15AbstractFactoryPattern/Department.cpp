#include "Department.h"



CDepartment::CDepartment()
{
}


CDepartment::~CDepartment()
{
}
int CDepartment::GetID(void)
{
	return _id;
}
void CDepartment::SetID(int value)
{
	_id = value;
}
string CDepartment::GetName(void)
{
	return _name;
}
void CDepartment::SetName(string value)
{
	_name = value;
}
