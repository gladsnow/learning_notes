#include "OperationAdd.h"



COperationAdd::COperationAdd()
{
}


COperationAdd::~COperationAdd()
{
}

double COperationAdd::GetResult()
{
	double result = 0;
	result = GetNumberA() + GetNumberB();
	return result;
}
