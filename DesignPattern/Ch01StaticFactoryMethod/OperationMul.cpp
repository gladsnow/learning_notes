#include "OperationMul.h"



COperationMul::COperationMul()
{
}


COperationMul::~COperationMul()
{
}

double COperationMul::GetResult(void)
{
	double result = 0;
	result = GetNumberA() * GetNumberB();
	return result;
}