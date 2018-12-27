#pragma once
#include "Observer.h"
class CNBAObserver :
	public CObserver
{
public:
	CNBAObserver();
	~CNBAObserver();
	CNBAObserver(string name,CSubject* sub);
	void Update(void);
};

