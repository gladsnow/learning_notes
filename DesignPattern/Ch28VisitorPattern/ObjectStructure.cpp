#include "ObjectStructure.h"



CObjectStructure::CObjectStructure()
{
	elements = new list<CPerson*>();
}


CObjectStructure::~CObjectStructure()
{
}

void CObjectStructure::Attach(CPerson* element)
{
	elements->push_back(element);
}
void CObjectStructure::Detach(CPerson* element)
{
	elements->remove(element);
}
void CObjectStructure::Display(CAction* visitor)
{
	list<CPerson*>::iterator itor;
	for (itor = elements->begin(); itor != elements->end();itor++)
	{
		(*itor)->Accept(visitor);
	}
}
