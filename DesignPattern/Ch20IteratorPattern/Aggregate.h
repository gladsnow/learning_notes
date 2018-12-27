#pragma once
#include "Iterator.h"
class CAggregate
{
public:
	CAggregate();
	~CAggregate();
	virtual CIterator* CreateIterator(void) = 0;
};

