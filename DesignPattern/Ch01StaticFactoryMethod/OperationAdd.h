#pragma once
#include "Operation.h"
class COperationAdd :public COperation
{
public:
	COperationAdd();
	~COperationAdd();
	double GetResult(void);
	
};

