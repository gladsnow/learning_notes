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
	cout << "ǰ�� " << name << " ����" << endl;
}

void CForwards::Defense(void)
{
	cout << "ǰ�� " << name << " ����" << endl;
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
	cout << "�з� " << name << " ����" << endl;
}

void CCenter::Defense(void)
{
	cout << "�з� " << name << " ����" << endl;
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
	cout << "���� " << name << " ����" << endl;
}

void CGuards::Defense(void)
{
	cout << "���� " << name << " ����" << endl;
}

CForeignCenter::CForeignCenter()
{
}

CForeignCenter::~CForeignCenter()
{
}

void CForeignCenter::Attack(void)
{
	cout << "�⼮�з� " << name << " ����" << endl;
}

void CForeignCenter::Defense(void)
{
	cout << "�⼮�з� " << name << " ����" << endl;
}
void CForeignCenter::SetName(string value)
{
	name = value;
}
string CForeignCenter::GetName(void)
{
	return name;
}