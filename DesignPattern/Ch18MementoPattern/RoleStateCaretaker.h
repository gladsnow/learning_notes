#pragma once
#include "RoleStateMemento.h"
class CRoleStateCaretaker
{
public:
	CRoleStateCaretaker();
	~CRoleStateCaretaker();
	CRoleStateMemento* GetMemento(void);
	void SetMemento(CRoleStateMemento* value);
private:
	CRoleStateMemento* memento;
};

