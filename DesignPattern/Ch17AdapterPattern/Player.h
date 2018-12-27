#pragma once
#include<string>
using namespace std;

class CPlayer
{
public:
	CPlayer();
	~CPlayer();
	CPlayer(string name);
	virtual void Attack(void) = 0;
	virtual void Defense(void) = 0;

protected:
	string name;
};

