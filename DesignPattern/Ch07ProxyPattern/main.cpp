#include<iostream>
#include<string>
#include"Proxy.h"
#include"SchoolGirl.h"
using namespace std;

int main(void)
{
	CSchoolGirl *jiaojiao = new CSchoolGirl();
	jiaojiao->Setname("Àî½¿½¿");
	CProxy *proxy = new CProxy(jiaojiao);

	proxy->GiveDolls();
	proxy->GiveFlowers();
	proxy->GiveChocolate();

 	return 0;
}