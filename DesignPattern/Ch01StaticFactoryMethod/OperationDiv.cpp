#include "OperationDiv.h"
#include <iostream>
using namespace std;


COperationDiv::COperationDiv()
{
}


COperationDiv::~COperationDiv()
{
}

double COperationDiv::GetResult(void)
{
	double result = 0;
	if (GetNumberB() == 0)
	{
		cout << "除数不能为0." << endl;
	}
	else
	{
		result = GetNumberA() / GetNumberB();
	}

	return result;
}