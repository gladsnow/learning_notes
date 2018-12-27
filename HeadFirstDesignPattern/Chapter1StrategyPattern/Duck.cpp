#include "Duck.h"


void CDuck::performFly()
{
	m_flyBehavior->fly();
}
void CDuck::performQuack()
{
	m_quackBehavior->quack();
}
void CDuck::swim()
{
	std::cout << "All ducks float, even decoys!" << endl;
}

void CDuck::setFlyBehavior(CFlyBehavior* fb)
{
	m_flyBehavior = fb;
}
void CDuck::setQuackBehavior(CQuackBehavior* qb)
{
	m_quackBehavior = qb;
}