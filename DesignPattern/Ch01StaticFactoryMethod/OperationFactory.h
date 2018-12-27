#pragma once
#include <string>
#include "Operation.h"
using namespace std;
class COperationFactory
{
public:
	COperationFactory();
	~COperationFactory();
	 COperation* createOperate(string operate);
};

