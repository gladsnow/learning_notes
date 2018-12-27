#include"ObjectStructure.h"
#include"ConcretePerson.h"
#include"ConcreteState.h"

int main(void)
{
	CObjectStructure* o = new CObjectStructure();
	o->Attach(new CMan());
	o->Attach(new CWoman());

	CSuccess* v1 = new CSuccess();
	o->Display(v1);

	CFailing* v2 = new CFailing();
	o->Display(v2);

	CAmativeness* v3 = new CAmativeness();
	o->Display(v3);
}