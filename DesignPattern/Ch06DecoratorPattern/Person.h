#pragma once
#include<string>
using namespace std;
class CPerson
{
public:
	CPerson();
	~CPerson();
	CPerson(string name);
	virtual void Show(void);
	
private:
	string name;
};

