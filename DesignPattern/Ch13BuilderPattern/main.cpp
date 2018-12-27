#include<iostream>
#include "Director.h"
#include "Builder.h"
#include "ConcreteBuilder1.h"
#include "ConcreteBuilder2.h"
using namespace std;

int main(void)
{
	CDirector director;
	CBuilder* b1 = new CConcreteBuilder1();
	CBuilder* b2 = new CConcreteBuilder2();

	director.Construct(b1);
	CProduct* p1 = b1->GetResult();
	p1->Show();

	director.Construct(b2);
	CProduct* p2 = b2->GetResult();
	p2->Show();

	return 0;
}