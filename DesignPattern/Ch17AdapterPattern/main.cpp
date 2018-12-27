#include<iostream>
#include"ConcretePlayer.h"
#include"Player.h"
#include"Translator.h"
using namespace std;

int main(void)
{
	CPlayer* b = new CForwards("°ÍµÙ¶û");
	b->Attack();

	CPlayer* m = new CGuards("ÂóµÏ");
	m->Attack();

	CPlayer* ym = new CTranslator("Ò¦Ã÷");
	ym->Attack();
	ym->Defense();

	return 0;

}