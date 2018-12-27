#include "Pizza.h"


CPizza::CPizza(void)
{
}


CPizza::~CPizza(void)
{
}

void CPizza::prepare()
{
	std::cout << "Preparing " << m_name << endl;
	std::cout << "Tossing dough..." << endl;
	std::cout << "Adding sauce..." << endl;
	std::cout << "Adding toppings..." << endl;

	list<string>::iterator iter; 
	for(iter = m_topppings.begin();iter!= m_topppings.end();iter++)
	{
		std::cout << "   " << *iter <<endl;
	}
}

void CPizza::bake()
{
	std::cout << "Bake for 25 minute at 350"  << endl;
}

void CPizza::cut()
{
	std::cout << "Cutting the pizza into diagonal slices" <<endl;
}

void CPizza::box()
{
	std::cout << "Place pizza in official PizzaStore box" << endl;
}

string CPizza::getName()
{
	return m_name;
}

CNYStyleCheesePizza::CNYStyleCheesePizza()
{
	m_name = "NY Style Sauce and Cheese Pizza";
	m_dough = "Thin Crust Dough";
	m_sauce = "Plum Tomato Sauce";

	m_topppings.push_back("Grated Reggiano Cheese");
}

CNYStyleCheesePizza::~CNYStyleCheesePizza()
{

}

CNYStyleVeggiePizza::CNYStyleVeggiePizza()
{
	m_name = "NY Style Sauce and Veggie Pizza";
	m_dough = "Thin Crust Dough";
	m_sauce = "Plum Tomato Sauce";

	m_topppings.push_back("Grated Reggiano Veggie");
}

CNYStyleVeggiePizza::~CNYStyleVeggiePizza()
{

}

CNYStyleClamPizza::CNYStyleClamPizza()
{
	m_name = "NY Style Sauce and Clam Pizza";
	m_dough = "Thin Crust Dough";
	m_sauce = "Plum Tomato Sauce";

	m_topppings.push_back("Grated Reggiano Clam");
}

CNYStyleClamPizza::~CNYStyleClamPizza()
{

}

CNYStylePepperoniPizza::CNYStylePepperoniPizza()
{
	m_name = "NY Style Sauce and Pepperoni Pizza";
	m_dough = "Thin Crust Dough";
	m_sauce = "Plum Tomato Sauce";

	m_topppings.push_back("Grated Reggiano Pepperoni");
}

CNYStylePepperoniPizza::~CNYStylePepperoniPizza()
{

}


ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
	m_name = "Chicago Style Deep Dish Cheese Pizza";
	m_dough = "Extra Thick Crust Dough";
	m_sauce = "Plum Tomato Sauce";

	m_topppings.push_back("Shredded Mozzarella Cheese");
}

ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza()
{

}

void ChicagoStyleCheesePizza::cut()
{
	std::cout << "Cutting the pizza into square slices" << endl;
}

ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza()
{
	m_name = "Chicago Style Deep Dish Cheese Pizza";
	m_dough = "Extra Thick Crust Dough";
	m_sauce = "Plum Tomato Sauce";

	m_topppings.push_back("Shredded Mozzarella Cheese");
}

ChicagoStyleVeggiePizza::~ChicagoStyleVeggiePizza()
{

}

void ChicagoStyleVeggiePizza::cut()
{
	std::cout << "Cutting the pizza into square slices" << endl;
}

ChicagoStyleClamPizza::ChicagoStyleClamPizza()
{
	m_name = "Chicago Style Deep Dish Clam Pizza";
	m_dough = "Extra Thick Crust Dough";
	m_sauce = "Plum Tomato Sauce";

	m_topppings.push_back("Shredded Mozzarella Clam");
}

ChicagoStyleClamPizza::~ChicagoStyleClamPizza()
{

}

void ChicagoStyleClamPizza::cut()
{
	std::cout << "Cutting the pizza into square slices" << endl;
}

ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza()
{
	m_name = "Chicago Style Deep Dish Pepperoni Pizza";
	m_dough = "Extra Thick Crust Dough";
	m_sauce = "Plum Tomato Sauce";

	m_topppings.push_back("Shredded Mozzarella Pepperoni");
}

ChicagoStylePepperoniPizza::~ChicagoStylePepperoniPizza()
{

}

void ChicagoStylePepperoniPizza::cut()
{
	std::cout << "Cutting the pizza into square slices" << endl;
}