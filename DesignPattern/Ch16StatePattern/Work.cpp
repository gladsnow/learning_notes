#include "Work.h"
#include "ConcreteState.h"
CWork::CWork()
{
	current = new CForenoonState();
}

CWork::~CWork()
{
}
double CWork::GetHour(void)
{
	return hour;
}
void CWork::SetHour(double value)
{
	hour = value;
}
bool CWork::GetTaskFinished(void)
{
	return finish;
}
void CWork::SetTaskFinished(bool value)
{
	finish = value;
}
void CWork::SetState(CState* s)
{
	current = s;
}
void CWork::WriteProgram(void)
{
	current->WriteProgram(this);
}
