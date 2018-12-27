#include "Caretaker.h"



CCaretaker::CCaretaker()
{
}


CCaretaker::~CCaretaker()
{
}

CMemento* CCaretaker::GetMemento(void)
{
	return memento;
}
void CCaretaker::SetMemento(CMemento* value)
{
	memento = value;
}