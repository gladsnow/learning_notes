#pragma once
#include<string>
using namespace std;

class CMemento
{
public:
	CMemento();
	CMemento(string state);
	~CMemento();
	string GetState(void);
private:
	string state;
};

