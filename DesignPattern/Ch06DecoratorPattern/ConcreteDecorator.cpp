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
	cout << "´óTÐô ";
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
	cout << "¿å¿ã ";
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
	cout << "ÆÆÇòÐ¬ ";
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
	cout << "Æ¤Ð¬ ";
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
	cout << "Áì´ø ";
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
	cout << "Î÷×° ";
	CFinery::Show();
}