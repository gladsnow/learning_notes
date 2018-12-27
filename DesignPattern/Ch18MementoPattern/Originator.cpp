#include "Originator.h"
#include<iostream>
using namespace std;

COriginator::COriginator()
{
}


COriginator::~COriginator()
{
}

void COriginator::SetState(string value)
{
	this->state = value;
}
string COriginator::GetState(void)
{
	return state;
}
CMemento* COriginator::CreateMemento(void)
{
	return (new CMemento(state));
}
void COriginator::SetMemento(CMemento* memento)
{
	state = memento->GetState();
}
void COriginator::Show(void)
{
	cout << "State=" << state << endl;
}
