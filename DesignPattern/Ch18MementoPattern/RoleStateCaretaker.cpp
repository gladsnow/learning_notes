#include "RoleStateCaretaker.h"



CRoleStateCaretaker::CRoleStateCaretaker()
{
}


CRoleStateCaretaker::~CRoleStateCaretaker()
{
}

CRoleStateMemento* CRoleStateCaretaker::GetMemento(void)
{
	return memento;
}
void CRoleStateCaretaker::SetMemento(CRoleStateMemento* value)
{
	memento = value;
}
