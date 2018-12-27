#pragma once
#include "Observer.h"
#include <string>
using namespace std;
class CStockObserver :
	public CObserver
{
public:
	CStockObserver();
	~CStockObserver();
	CStockObserver(string name,CSubject* sub);
	void Update(void);
};

