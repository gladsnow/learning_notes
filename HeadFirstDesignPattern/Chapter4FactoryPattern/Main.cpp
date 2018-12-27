#include <iostream>
#include "PizzaStore.h"
using namespace std;

int main(void)
{
	CPizzaStore* nyStore = new NYPizzaStore();
	CPizzaStore* chicagoStore = new ChicagoPizzaStore();

	CPizza* pizza = nyStore->orderPizza("cheese");
	std::cout << "Ethan ordered a " << pizza->getName() << endl;

	pizza = chicagoStore->orderPizza("cheese");
	std::cout << "Joel ordered a " << pizza->getName() << endl;

	return 0;
}