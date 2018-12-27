#pragma once
#include "Operation.h"
class COperationSub :
	public COperation
{
public:
	COperationSub();
	~COperationSub();
	double GetResult(void);
};

