#include<iostream>
#include"ConcretePlayer.h"
#include"Player.h"
#include"Translator.h"
using namespace std;

int main(void)
{
	CPlayer* b = new CForwards("�͵ٶ�");
	b->Attack();

	CPlayer* m = new CGuards("���");
	m->Attack();

	CPlayer* ym = new CTranslator("Ҧ��");
	ym->Attack();
	ym->Defense();

	return 0;

}