#include <iostream>
#include "Beverage.h"
#include "CondimentDecorator.h"
#include "Espresso.h"

using namespace std;

int main(void)
{
	CBeverage* beverage = new CEspresso();
	std::cout << beverage->getDescription() << " $" << beverage->cost() << endl;

	CBeverage* beverage2 = new CHouseBlend();
	beverage2 = new CMocha(beverage2);
	beverage2 = new CMocha(beverage2);
	std::cout << beverage2->getDescription() << " $" << beverage2->cost();

	return 0;
}