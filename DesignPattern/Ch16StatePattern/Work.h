#pragma once
#include"State.h"
class CState;

class CWork
{
public:
	CWork();
	~CWork();
	double GetHour(void);
	void SetHour(double value);
	bool GetTaskFinished(void);
	void SetTaskFinished(bool value);
	void SetState(CState* s);
	void WriteProgram(void);
private:
	CState* current;
	double hour;
	bool finish;
};

