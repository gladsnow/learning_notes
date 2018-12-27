#include "MallardDuck.h"
#include "FlyWithWings.h"

CMallardDuck::CMallardDuck(void)
{
	m_quackBehavior = new CQuack();
	m_flyBehavior = new CFlyWithWings();
}


CMallardDuck::~CMallardDuck(void)
{
	delete m_flyBehavior;
	delete m_flyBehavior;
}

void CMallardDuck::display()
{
	std::cout << "I'm a real Mallard duck" << endl;
}
