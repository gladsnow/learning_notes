#pragma once
#include"Observer.h"
#include<string>
using namespace std;
class CObserver;
class CSubject
{
public:
	CSubject();
	~CSubject();
	virtual void Attach(CObserver* observer);
	virtual void Detach(CObserver* observer);
	virtual void Notify(void);
	virtual void SetSubjectState(string value);
	virtual string GetSubjectState(void);
};

