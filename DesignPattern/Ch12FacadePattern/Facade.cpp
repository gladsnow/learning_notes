#include "Facade.h"



CFacade::CFacade()
{
	one = new CSubSystemOne();
	two = new CSubSystemTwo();
	three = new CSubSystemThree();
	four = new CSubSystemFour();
}


CFacade::~CFacade()
{
}

void CFacade::MethodA(void)
{
	cout << "\n������A() ---- " << endl;
	one->MethodOne();
	two->MethodTwo();
	four->MethodFour();
}

void CFacade::MethodB(void)
{
	cout << "\n������B() ---- " << endl;
	two->MethodTwo();
	three->MethodThree();
}
