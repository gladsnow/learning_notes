#pragma once
#include "RoleStateMemento.h"
class CGameRole
{
public:
	CGameRole();
	~CGameRole();
	CRoleStateMemento* SaveState(void);
	void RecoveryState(CRoleStateMemento* memento);
	void StateDisplay(void);
	void GetInitState(void);
	void Fight(void);

private:
	int atk;
	int vit;
	int def;
};

