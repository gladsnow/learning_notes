#include "PizzaStore.h"
#include "Pizza.h"

CPizzaStore::CPizzaStore(void)
{
}


CPizzaStore::~CPizzaStore(void)
{
}

CPizza* CPizzaStore::orderPizza(string type)
{
	CPizza* pizza;
	pizza = createPizza(type);

	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();

	return pizza;
}

CPizza* CPizzaStore::createPizza(string type)
{
	return NULL;
}

NYPizzaStore::NYPizzaStore(void)
{

}
NYPizzaStore::~NYPizzaStore(void)
{

}

CPizza* NYPizzaStore::createPizza(string type)
{
	if(type == "cheese")
		return new CNYStyleCheesePizza();
	else if(type == "veggie")
		return new CNYStyleVeggiePizza();
	else if(type == "clam")
		return new CNYStyleClamPizza();
	else if(type == "pepperoni")
		return new CNYStylePepperoniPizza();
	else
		return NULL;
}


ChicagoPizzaStore::ChicagoPizzaStore(void)
{

}
ChicagoPizzaStore::~ChicagoPizzaStore(void)
{

}

CPizza* ChicagoPizzaStore::createPizza(string type)
{
	if(type == "cheese")
		return new CNYStyleCheesePizza();
	else if(type == "veggie")
		return new CNYStyleVeggiePizza();
	else if(type == "clam")
		return new CNYStyleClamPizza();
	else if(type == "pepperoni")
		return new CNYStylePepperoniPizza();
	else
		return NULL;
}