#pragma once
class CRoleStateMemento
{
public:
	CRoleStateMemento();
	~CRoleStateMemento();
	CRoleStateMemento(int vit, int atk, int def);
	int GetVitality(void);
	void SetVitality(int value);
	int GetAttack(void);
	void SetAttack(int value);
	int GetDefense(void);
	void SetDefense(int value);
private:
	int vit;
	int atk;
	int def;
};

