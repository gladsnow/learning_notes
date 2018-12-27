#include<iostream>
#include<string>
#include"Factory.h"
#include "ConcreteFactory.h"
using namespace std;

int main(void)
{
	CFactory* factory = new CUndergraduateFactory();
	CLeiFeng* student = factory->CreateLeiFeng();
	student->BuyRice();
	student->Sweep();
	student->Wash();
	return 0;
}