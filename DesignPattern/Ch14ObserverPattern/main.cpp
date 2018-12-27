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

	CObserver* tongshi1 = new CStockObserver("魏关姹",huhansan);
	CObserver* tongshi2 = new CNBAObserver("易冠茶", huhansan);
	huhansan->Attach(tongshi1);
	huhansan->Attach(tongshi2);
	//huhansan->Detach(tongshi1);

	huhansan->SetSubjectState("我胡汉三回来了");

	huhansan->Notify();
	return 0;
}