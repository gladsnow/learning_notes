#include "StockObserver.h"
#include<iostream>
using namespace std;

CStockObserver::CStockObserver()
{
}


CStockObserver::~CStockObserver()
{
}

CStockObserver::CStockObserver(string name,CSubject* sub):CObserver(name,sub)
{
}
void CStockObserver::Update(void)
{
	cout << sub->GetSubjectState()<<" "<< name << " 关闭股票行情，继续工作" << endl;
}