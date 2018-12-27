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
	product->Add("���� A");
}
void CConcreteBuilder1::BuildPartB(void)
{
	product->Add("���� B");
}
CProduct* CConcreteBuilder1::GetResult(void)
{
	return product;
}
