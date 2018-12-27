#include "Adapter.h"
#include<iostream>

int main()
{
	CMallardDuck* duck = new CMallardDuck();

	WildTurkey* turkey = new WildTurkey();
	CDuck* turkeyAdpater = new TurkeyAdapter(turkey);

	std::cout << "The Turkey says...." << std::endl;
	turkey->gobble();
	turkey->fly();

	std::cout << "\nThe Duck says...." << std::endl;
	duck->quack();
	duck->fly();

	std::cout << "\nThe TurkeyAdapter says...." << std::endl;
	turkeyAdpater->quack();
	turkeyAdpater->fly();

	return 0;
}