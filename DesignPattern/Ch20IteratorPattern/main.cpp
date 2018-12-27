#include<string>
#include<iostream>
#include"ConcreteAggregate.h"
#include"ConcreteIterator.h"
using namespace std;

int main(void)
{
	CConcreteAggregate* a = new CConcreteAggregate();
	a->SetItems("BigBird");
	a->SetItems("С��");
	a->SetItems("����");
	a->SetItems("����");
	a->SetItems("�����ڲ���Ա");
	a->SetItems("С͵");

	CIterator* i = new CConcreteIterator(a);
	string item = i->First();
	while (!i->IsDone())
	{
		cout << i->CurrentItem()<<" ����Ʊ" << endl;
		i->Next();
	}

	return 0;
}