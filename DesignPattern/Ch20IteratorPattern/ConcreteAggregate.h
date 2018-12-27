#pragma once
#include "Aggregate.h"
#include<list>
#include<string>
using namespace std;
class CIterator;
class CConcreteAggregate :
	public CAggregate
{
public:
	CConcreteAggregate();
	~CConcreteAggregate();
	CIterator* CreateIterator(void);
	int GetCount(void);
	string GetItems(int index);
	void SetItems(string value);

private:
	list<string>* items;
};

