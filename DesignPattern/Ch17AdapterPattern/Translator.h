#pragma once
#include "Player.h"
#include "ConcretePlayer.h"
#include<string>
using namespace std;
class CTranslator:public CPlayer
{
public:
	CTranslator();
	~CTranslator();
	CTranslator(string name);
	void Attack(void);
	void Defense(void);
private:
	CForeignCenter* wjzf;
};

