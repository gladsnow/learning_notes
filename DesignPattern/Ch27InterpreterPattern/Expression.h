#pragma once
#include"PlayContext.h"
class CPlayContext;
class CExpression
{
public:
	CExpression();
	~CExpression();
	void Interpret(CPlayContext* context);
	virtual void Excute(char key, double value) = 0;
};

