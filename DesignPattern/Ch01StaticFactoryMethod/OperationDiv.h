#pragma once
#include "Operation.h"
class COperationDiv :
	public COperation
{
public:
	COperationDiv();
	~COperationDiv();
	double GetResult(void);
};

