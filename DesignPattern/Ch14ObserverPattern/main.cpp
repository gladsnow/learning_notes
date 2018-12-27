#include<iostream>
#include"StockObserver.h"
#include"ConcreteSubject.h"
#include"Subject.h"
#include"NBAObserver.h"
#include<string>
using namespace std;

int main(void)
{
	CSubject* huhansan = new CBoss();

	CObserver* tongshi1 = new CStockObserver("κ���",huhansan);
	CObserver* tongshi2 = new CNBAObserver("�׹ڲ�", huhansan);
	huhansan->Attach(tongshi1);
	huhansan->Attach(tongshi2);
	//huhansan->Detach(tongshi1);

	huhansan->SetSubjectState("�Һ�����������");

	huhansan->Notify();
	return 0;
}