#include "ChocolateBoiler.h"



CChocolateBoiler::CChocolateBoiler()
{
	empty_ = true;
	boiled_ = false;
	instance_ = nullptr;
	//����ʽ
	/*instance_ = new CChocolateBoiler();*/
}

//����ʽ���̲߳���ȫ
//��������������ʽ�̰߳�ȫ������ʽ��˫�������Ǽ�ʽ/�ڲ���̬�ࣻö�٣�
CChocolateBoiler* CChocolateBoiler::getInstance()
{
	if (instance_ == nullptr)
	{
		instance_ = new CChocolateBoiler();
	}
	return instance_;
}

//����ʽ
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
