#include "ConcretePlayer.h"
#include<iostream>
using namespace std;

CForwards::CForwards()
{

}
CForwards::CForwards(string name):CPlayer(name)
{
	
}
CForwards::~CForwards()
{

}

void CForwards::Attack(void)
{
	cout << "Ç°·æ " << name << " ½ø¹¥" << endl;
}

void CForwards::Defense(void)
{
	cout << "Ç°·æ " << name << " ·ÀÊØ" << endl;
}

CCenter::CCenter()
{
}

CCenter::CCenter(string name) :CPlayer(name)
{

}
CCenter::~CCenter()
{
}

void CCenter::Attack(void)
{
	cout << "ÖÐ·æ " << name << " ½ø¹¥" << endl;
}

void CCenter::Defense(void)
{
	cout << "ÖÐ·æ " << name << " ·ÀÊØ" << endl;
}

CGuards::CGuards()
{
}

CGuards::CGuards(string name) :CPlayer(name)
{

}
CGuards::~CGuards()
{
}

void CGuards::Attack(void)
{
	cout << "ºóÎÀ " << name << " ½ø¹¥" << endl;
}

void CGuards::Defense(void)
{
	cout << "ºóÎÀ " << name << " ·ÀÊØ" << endl;
}

CForeignCenter::CForeignCenter()
{
}

CForeignCenter::~CForeignCenter()
{
}

void CForeignCenter::Attack(void)
{
	cout << "Íâ¼®ÖÐ·æ " << name << " ½ø¹¥" << endl;
}

void CForeignCenter::Defense(void)
{
	cout << "Íâ¼®ÖÐ·æ " << name << " ·ÀÊØ" << endl;
}
void CForeignCenter::SetName(string value)
{
	name = value;
}
string CForeignCenter::GetName(void)
{
	return name;
}