#include "ModelDuck.h"
#include "FlyWithWings.h"
#include "QuackBehavior.h"

CModelDuck::CModelDuck(void)
{
	m_flyBehavior = new CFlyNoWay();
	m_quackBehavior = new CQuack();
}


CModelDuck::~CModelDuck(void)
{
}

void CModelDuck::display()
{
	std::cout << "I'm a model duck" << endl;
}