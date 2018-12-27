#pragma once
#include "Player.h"
#include<string>
using namespace std;
class CForwards:public CPlayer
{
public:
	CForwards();
	CForwards(string name);
	~CForwards();
	void Attack(void);
	void Defense(void);
};

class CCenter :public CPlayer
{
public:
	CCenter();
	CCenter(string name);
	~CCenter();
	void Attack(void);
	void Defense(void);
};

class CGuards :public CPlayer
{
public:
	CGuards();
	CGuards(string name);
	~CGuards();
	void Attack(void);
	void Defense(void);
};

class CForeignCenter
{
public:
	CForeignCenter();
	CForeignCenter(string name);
	~CForeignCenter();
	void Attack(void);
	void Defense(void);
	void SetName(string value);
	string GetName(void);
private:
	string name;
};
