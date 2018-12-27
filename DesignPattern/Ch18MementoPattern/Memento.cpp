#include "Memento.h"



CMemento::CMemento()
{
}

CMemento::CMemento(string state)
{
	this->state = state;
}

CMemento::~CMemento()
{
}

string CMemento::GetState(void)
{
	return state;
}
