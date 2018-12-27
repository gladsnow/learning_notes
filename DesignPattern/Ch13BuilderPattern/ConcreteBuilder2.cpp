#include "ConcreteBuilder2.h"



CConcreteBuilder2::CConcreteBuilder2()
{
	product = new CProduct();
}


CConcreteBuilder2::~CConcreteBuilder2()
{
}

void CConcreteBuilder2::BuildPartA(void)
{
	product->Add("部件 X");
}
void CConcreteBuilder2::BuildPartB(void)
{
	product->Add("部件 Y");
}
CProduct* CConcreteBuilder2::GetResult(void)
{
	return product;
}
