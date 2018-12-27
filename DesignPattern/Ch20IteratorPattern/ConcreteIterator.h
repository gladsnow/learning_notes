#pragma once
#include "Iterator.h"
#include "ConcreteAggregate.h"
class CConcreteIterator :
	public CIterator
{
public:
	CConcreteIterator();
	~CConcreteIterator();
	CConcreteIterator(CConcreteAggregate* aggregate);
	string First(void);
	string Next(void);
	bool IsDone(void);
	string CurrentItem(void);
private:
	int current;
	CConcreteAggregate* aggregate;
	
};

