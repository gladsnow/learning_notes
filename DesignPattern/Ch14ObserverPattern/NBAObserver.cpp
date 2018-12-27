#include "NBAObserver.h"
#include<iostream>
using namespace std;

CNBAObserver::CNBAObserver()
{
}


CNBAObserver::~CNBAObserver()
{
}

CNBAObserver::CNBAObserver(string name,CSubject* sub) :CObserver(name, sub)
{
}
void CNBAObserver::Update(void)
{
	cout << sub->GetSubjectState() << " " << name << " 关闭NBA直播，继续工作" << endl;
}