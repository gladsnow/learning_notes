#pragma once
#include "Expression.h"
class CScale :
	public CExpression
{
public:
	CScale();
	~CScale();
	void Excute(char key, double value);
};

