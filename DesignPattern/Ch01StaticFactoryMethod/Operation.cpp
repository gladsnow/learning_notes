#include "Operation.h"



COperation::COperation()
{
}


COperation::~COperation()
{
}

void COperation::SetNumberA(double value)
{
	_numberA = value;
}

double COperation::GetNumberA(void)
{
	return _numberA;
}

void COperation::SetNumberB(double value)
{
	_numberB = value;
}

double COperation::GetNumberB(void)
{
	return _numberB;
}

double COperation::GetResult(void)
{
	double result = 0;
	return result;
}