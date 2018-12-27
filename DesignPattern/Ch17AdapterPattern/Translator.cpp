#include "Translator.h"



CTranslator::CTranslator()
{
}


CTranslator::~CTranslator()
{
}

CTranslator::CTranslator(string name):CPlayer(name)
{
	wjzf = new CForeignCenter();
	wjzf->SetName(name);
}

void CTranslator::Attack(void)
{
	wjzf->Attack();
}

void CTranslator::Defense(void)
{
	wjzf->Defense();
}

