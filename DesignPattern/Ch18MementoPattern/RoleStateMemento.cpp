#include "RoleStateMemento.h"

CRoleStateMemento::CRoleStateMemento()
{
}


CRoleStateMemento::~CRoleStateMemento()
{
}

CRoleStateMemento::CRoleStateMemento(int vit, int atk, int def)
{
	this->atk = atk;
	this->vit = vit;
	this->def = def;
}
int CRoleStateMemento::GetVitality(void)
{
	return vit;
}
void CRoleStateMemento::SetVitality(int value)
{
	vit = value;
}
int CRoleStateMemento::GetAttack(void)
{
	return atk;
}
void CRoleStateMemento::SetAttack(int value)
{
	atk = value;
}
int CRoleStateMemento::GetDefense(void)
{
	return def;
}
void CRoleStateMemento::SetDefense(int value)
{
	def = value;
}