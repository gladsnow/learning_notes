#include "Singleton.h"

CSingleton::CSingleton()
{
}


CSingleton::~CSingleton()
{
}
CSingleton* CSingleton::instance = nullptr;
//CSingleton* CSingleton::GetInstance(void)
//{
//	if (instance == nullptr)
//	{
//		instance = new CSingleton();
//	}
//
//	return instance;
//}
