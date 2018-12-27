#pragma once
#include"Cmd.h"
#include<list>
using namespace std;

class CWaiter
{
public:
	CWaiter();
	~CWaiter();
	void SetOrder(CCmd* command);
	void CancelOrder(CCmd* command);
	void Notify(void);
private:
	list<CCmd*> orders;
};

