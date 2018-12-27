#include "Adapter.h"
#include <iostream>


CMallardDuck::CMallardDuck()
{

}

CMallardDuck::~CMallardDuck()
{

}

void CMallardDuck::quack()
{
	std::cout << "quack()" << std::endl;
}

void CMallardDuck::fly()
{
	std::cout << "fly()" << std::endl;
}

WildTurkey::WildTurkey()
{

}
WildTurkey::~WildTurkey()
{

}

void WildTurkey::gobble()
{
	std::cout << "Gobble gobble" << std::endl;
}
void WildTurkey::fly()
{
	std::cout << "I'm flying a short distance" << std::endl;
}

TurkeyAdapter::TurkeyAdapter(Turkey* turkey)
{
	turkey_ = turkey;
}
TurkeyAdapter::~TurkeyAdapter()
{

}
void TurkeyAdapter::quack()
{
	turkey_->gobble();
}
void TurkeyAdapter::fly()
{
	for (int i = 0; i < 5; i++)
	{
		turkey_->fly();
	}
}