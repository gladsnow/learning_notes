#include "OperationSub.h"



COperationSub::COperationSub()
{
}


COperationSub::~COperationSub()
{
}

double COperationSub::GetResult(void)
{
	double result = 0;
	result = GetNumberA() - GetNumberB();
	return result;
}
