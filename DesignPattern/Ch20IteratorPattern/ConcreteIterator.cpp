#include "ConcreteIterator.h"



CConcreteIterator::CConcreteIterator()
{
}


CConcreteIterator::~CConcreteIterator()
{
}

CConcreteIterator::CConcreteIterator(CConcreteAggregate* aggregate)
{
	this->aggregate = aggregate;
	current = 0;
}

string CConcreteIterator::First(void)
{
	return aggregate->GetItems(0);
}
string CConcreteIterator::Next(void)
{
	string ret = "";
	current++;
	if (current < aggregate->GetCount())
	{
		ret = aggregate->GetItems(current);
	}
	return ret;
}
bool CConcreteIterator::IsDone(void)
{
	return current >= aggregate->GetCount() ? true : false;
}
string CConcreteIterator::CurrentItem(void)
{
	return aggregate->GetItems(current);
}
