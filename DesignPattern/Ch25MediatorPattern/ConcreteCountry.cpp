#include "ConcreteCountry.h"
#include<iostream>
using namespace std;

CUSA::CUSA()
{
}

CUSA::~CUSA()
{
}
CUSA::CUSA(CUnitedNations* mediator):CCountry(mediator)
{
}
void CUSA::Declare(string message)
{
	mediator->Declare(message, this);
}
void CUSA::GetMessage(string message)
{
	cout << "美国获得对方信息： " << message << endl;
}

CIraq::CIraq()
{
}


CIraq::~CIraq()
{
}
CIraq::CIraq(CUnitedNations* mediator) :CCountry(mediator)
{
}
void CIraq::Declare(string message)
{
	mediator->Declare(message, this);
}
void CIraq::GetMessage(string message)
{
	cout << "伊拉克获得对方信息： " << message << endl;
}
