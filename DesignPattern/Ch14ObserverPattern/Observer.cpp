#include "Observer.h"

CObserver::CObserver()
{
}


CObserver::~CObserver()
{
}
CObserver::CObserver(string name,CSubject* sub)
{
	this->name = name;
	this->sub = sub;
}
void CObserver::Update(void)
{

}
