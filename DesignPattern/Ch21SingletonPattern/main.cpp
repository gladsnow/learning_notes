#include<iostream>
#include"Singleton.h"
using namespace std;

int main(void)
{
CSingleton* s1 = CSingleton::Get_Instance();
CSingleton* s2 = CSingleton::Get_Instance();

	if (s1 == s2)
	{
		cout << "������������ͬ��ʵ����" << endl;
	}
	
	return 0;
}