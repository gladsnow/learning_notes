#include "ConcreteDecorator.h"
#include<iostream>
using namespace std;

CTShirts::CTShirts()
{
}


CTShirts::~CTShirts()
{
}

void CTShirts::Show(void)
{
	cout << "��T�� ";
	CFinery::Show();
}

CBigTrouser::CBigTrouser()
{
}

CBigTrouser::~CBigTrouser()
{
}

void CBigTrouser::Show(void)
{
	cout << "��� ";
	CFinery::Show();
}

CSneakers::CSneakers()
{
}

CSneakers::~CSneakers()
{
}
void CSneakers::Show(void)
{
	cout << "����Ь ";
	CFinery::Show();
}

CLeatherShoes::CLeatherShoes()
{
}

CLeatherShoes::~CLeatherShoes()
{
}
void CLeatherShoes::Show(void)
{
	cout << "ƤЬ ";
	CFinery::Show();
}

CTie::CTie()
{
}

CTie::~CTie()
{
}
void CTie::Show(void)
{
	cout << "��� ";
	CFinery::Show();
}

CSuit::CSuit()
{
}

CSuit::~CSuit()
{
}

void CSuit::Show(void)
{
	cout << "��װ ";
	CFinery::Show();
}