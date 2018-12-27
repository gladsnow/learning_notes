#include "GameRole.h"
#include<iostream>
using namespace std;

CGameRole::CGameRole()
{
}


CGameRole::~CGameRole()
{
}
CRoleStateMemento* CGameRole::SaveState(void)
{
	return (new CRoleStateMemento(vit, atk, def));

}
void CGameRole::RecoveryState(CRoleStateMemento* memento)
{
	this->vit = memento->GetVitality();
	this->atk = memento->GetAttack();
	this->def = memento->GetDefense();
}

void CGameRole::StateDisplay(void)
{
	cout << "角色当前状态: " << endl;
	cout << "体力： " << this->vit << endl;
	cout << "攻击力： " << this->atk << endl;
	cout << "防御力： " << this->def << endl;
}
void CGameRole::GetInitState(void)
{
	this->vit = 100;
	this->atk = 100;
	this->def = 100;

}
void CGameRole::Fight(void)
{
	this->vit = 0;
	this->atk = 0;
	this->def = 0;
}
