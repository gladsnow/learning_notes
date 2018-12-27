#pragma once
#include<string>
using namespace std;

class CIterator
{
public:
	CIterator();
	~CIterator();
	virtual string First(void) = 0;
	virtual string Next(void) = 0;
	virtual bool IsDone(void) = 0;
	virtual string CurrentItem(void) = 0;
};

