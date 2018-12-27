#include "FlyWithWings.h"


CFlyWithWings::CFlyWithWings(void)
{
}


CFlyWithWings::~CFlyWithWings(void)
{
}

void CFlyWithWings::fly()
{
	std::cout << "I'm flying!!" << endl;
}

CFlyNoWay::CFlyNoWay(void)
{

}
CFlyNoWay::~CFlyNoWay(void)
{

}

void CFlyNoWay::fly()
{
	std::cout << "I can't fly" << endl;
}

CFlyRocketPowered::CFlyRocketPowered()
{

}
CFlyRocketPowered::~CFlyRocketPowered()
{

}

void CFlyRocketPowered::fly()
{
	std::cout << "I'm flying with a rocket!" << endl;
}