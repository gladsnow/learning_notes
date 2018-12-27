#include<string>
#include<iostream>
#include"ConcreteAggregate.h"
#include"ConcreteIterator.h"
using namespace std;

int main(void)
{
	CConcreteAggregate* a = new CConcreteAggregate();
	a->SetItems("BigBird");
	a->SetItems("小菜");
	a->SetItems("行李");
	a->SetItems("老外");
	a->SetItems("公交内部人员");
	a->SetItems("小偷");

	CIterator* i = new CConcreteIterator(a);
	string item = i->First();
	while (!i->IsDone())
	{
		cout << i->CurrentItem()<<" 请买车票" << endl;
		i->Next();
	}

	return 0;
}