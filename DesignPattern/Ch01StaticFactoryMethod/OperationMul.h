#pragma once
#include "Operation.h"
class COperationMul :
	public COperation
{
public:
	COperationMul();
	~COperationMul();
	double GetResult(void);
};

