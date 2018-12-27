#include "ConcreteSubject.h"
CBoss::CBoss()
{
}


CBoss::~CBoss()
{
}

void CBoss::Attach(CObserver* observer)
{
	observers.push_front(observer);
}
void CBoss::Detach(CObserver* observer)
{
	observers.remove(observer);
}
void CBoss::Notify(void)
{
	for each (CObserver* o in observers)
	{
		o->Update();
	}
}
void CBoss::SetSubjectState(string value)
{
	action = value;
}
string CBoss::GetSubjectState(void)
{
	return action;
}

CSecretary::CSecretary()
{
}


CSecretary::~CSecretary()
{
}

void CSecretary::Attach(CObserver* observer)
{
	observers.push_front(observer);
}
void CSecretary::Detach(CObserver* observer)
{
	observers.remove(observer);
}
void CSecretary::Notify(void)
{
	for each (CObserver* o in observers)
	{
		o->Update();
	}
}
void CSecretary::SetSubjectState(string value)
{
	action = value;
}
string CSecretary::GetSubjectState(void)
{
	return action;
}
