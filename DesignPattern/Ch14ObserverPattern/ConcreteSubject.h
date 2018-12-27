#pragma once
#include"Subject.h"
#include"Observer.h"
#include<list>
#include<string>
#include"Subject.h"
using namespace std;

class CBoss:public CSubject
{
public:
	CBoss();
	~CBoss();
	 void Attach(CObserver* observer);
	 void Detach(CObserver* observer);
	 void Notify(void);
	 void SetSubjectState(string value);
	 string GetSubjectState(void);
private:
	list<CObserver*> observers;
	string action;
};

class CSecretary :public CSubject
{
public:
	CSecretary();
	~CSecretary();
	void Attach(CObserver* observer);
	void Detach(CObserver* observer);
	void Notify(void);
	void SetSubjectState(string value);
	string GetSubjectState(void);
private:
	list<CObserver*> observers;
	string action;
};

