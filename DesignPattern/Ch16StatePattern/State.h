#pragma once
#include"Work.h"
class CWork;

class CState
{
public:
	CState();
	~CState();
	virtual void WriteProgram(CWork* w);
};

