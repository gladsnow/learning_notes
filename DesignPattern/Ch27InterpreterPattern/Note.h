#pragma once
#include "Expression.h"
class CNote :
	public CExpression
{
public:
	CNote();
	~CNote();
	void Excute(char key, double value);
};

