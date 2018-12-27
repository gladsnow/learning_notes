#pragma once
#include<string>
#include"Memento.h"
using namespace std;

class COriginator
{
public:
	COriginator();
	~COriginator();
	void SetState(string value);
	string GetState(void);
	CMemento* CreateMemento(void);
	void SetMemento(CMemento* memento);
	void Show(void);

private:
	string state;
};

