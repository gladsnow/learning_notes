#include<iostream>
#include "Originator.h"
#include "Memento.h"
#include "Caretaker.h"
#include"GameRole.h"
#include"RoleStateCaretaker.h"
using namespace std;

int main(void)
{
	COriginator* o = new COriginator();
	o->SetState("On");
	o->Show();

	CCaretaker* c = new CCaretaker();
	c->SetMemento(o->CreateMemento());

	o->SetState("Off");
	o->Show();

	o->SetMemento(c->GetMemento());
	o->Show();

	CGameRole* lixiaoyao = new CGameRole();
	lixiaoyao->GetInitState();
	lixiaoyao->StateDisplay();

	CRoleStateCaretaker* stateAdmin = new CRoleStateCaretaker();
	stateAdmin->SetMemento(lixiaoyao->SaveState());

	lixiaoyao->Fight();
	lixiaoyao->StateDisplay();

	lixiaoyao->RecoveryState(stateAdmin->GetMemento());
	lixiaoyao->StateDisplay();
	return 0;
}