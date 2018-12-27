#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"

CConcreteAggregate::CConcreteAggregate()
{
	items = new list<string>();
}


CConcreteAggregate::~CConcreteAggregate()
{
}
CIterator* CConcreteAggregate::CreateIterator(void)
{
	return (new CConcreteIterator(this));
}
int CConcreteAggregate::GetCount(void)
{
	return items->size();
}
string CConcreteAggregate::GetItems(int index)
{
	list<string>::iterator iter;
	int i = 0;
	string ret = "";
	for (iter = items->begin(); iter != items->end(); iter++)
	{
		if (i == index)
		{
			ret = *iter;
			break;
		}
		i++;
	}
	return ret;
}
void  CConcreteAggregate::SetItems(string value)
{
	if (value != "")
	{
		items->push_back(value);
	}
}
