#include "ChocolateBoiler.h"



CChocolateBoiler::CChocolateBoiler()
{
	empty_ = true;
	boiled_ = false;
	instance_ = nullptr;
	//饿汉式
	/*instance_ = new CChocolateBoiler();*/
}

//懒汉式，线程不安全
//其他方法：懒汉式线程安全；饿汉式；双检锁；登记式/内部静态类；枚举；
CChocolateBoiler* CChocolateBoiler::getInstance()
{
	if (instance_ == nullptr)
	{
		instance_ = new CChocolateBoiler();
	}
	return instance_;
}

//饿汉式
//CChocolateBoiler* CChocolateBoiler::getInstance()
//{
//	return instance_;
//}


CChocolateBoiler::~CChocolateBoiler()
{
	if (instance_ != nullptr)
	{
		delete instance_;
	}
}

void CChocolateBoiler::fill()
{
	if (isEmpty())
	{
		empty_ = false;
		boiled_ = false;
	}
}
void CChocolateBoiler::drain()
{
	if (!isEmpty() && isBoiled())
	{
		empty_ = true;
	}
}
void CChocolateBoiler::boil()
{
	if (!isEmpty() && !isBoiled())
	{
		boiled_ = true;
	}
}
bool CChocolateBoiler::isEmpty()
{
	return empty_;
}
bool CChocolateBoiler::isBoiled()
{
	return boiled_;
}
