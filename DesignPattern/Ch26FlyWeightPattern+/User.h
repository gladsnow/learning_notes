#pragma once
#include<string>
using namespace std;

class CUser
{
public:
	CUser();
	~CUser();
	CUser(string name);
	string GetName(void);
private:
	string name;
};

