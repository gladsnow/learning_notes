#pragma once
#include<string>
#include"Subject.h"
using namespace std;
class CSubject;
class CObserver
{
public:
	CObserver();
	~CObserver();
	CObserver(string name, CSubject* sub);
	virtual void Update(void);
protected:
	string name;
	CSubject* sub;
};

