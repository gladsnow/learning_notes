#pragma once
#include "Memento.h"
class CCaretaker
{
public:
	CCaretaker();
	~CCaretaker();
	CMemento* GetMemento(void);
	void SetMemento(CMemento* value);
private:
	CMemento* memento;

};

