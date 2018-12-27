#pragma once
#include "Observer.h"

class CSubject
{
public:
	virtual void registerObserver(CObserver* ob) = 0;
	virtual void removeObserver(CObserver* ob) = 0;
	virtual void notifyObservers() = 0;
};