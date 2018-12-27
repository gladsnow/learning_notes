#include "QuackBehavior.h"

CQuack::CQuack(void)
{

}

CQuack:: ~CQuack(void)
{
}

void CQuack::quack()
{
	std::cout << "Quack" << endl;
}

CMuteQuack::CMuteQuack(void)
{

}

CMuteQuack::~CMuteQuack(void)
{

}

void CMuteQuack::quack()
{
	std::cout << "Silence" << endl;
}

CSqueak::CSqueak()
{

}

CSqueak::~CSqueak()
{

}

void CSqueak::quack()
{
	std::cout << "Squeak" << endl;
}