#include "ConcreteBuilder1.h"



CConcreteBuilder1::CConcreteBuilder1()
{
	product = new CProduct();
}


CConcreteBuilder1::~CConcreteBuilder1()
{
}

void CConcreteBuilder1::BuildPartA(void)
{
	product->Add("部件 A");
}
void CConcreteBuilder1::BuildPartB(void)
{
	product->Add("部件 B");
}
CProduct* CConcreteBuilder1::GetResult(void)
{
	return product;
}
