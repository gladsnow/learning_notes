#include "ConcretePerson.h"



CMan::CMan()
{
}


CMan::~CMan()
{
}

void CMan::Accept(CAction* visitor)
{
	visitor->GetManConclusion(this);
}

CWoman::CWoman()
{
}

CWoman::~CWoman()
{
}

void CWoman::Accept(CAction* visitor)
{
	visitor->GetWomanConclusion(this);
}