#pragma once
#include<string>
using namespace std;
class CUser
{
public:
	CUser();
	~CUser();
	int GetID(void);
	void SetID(int value);
	string GetName(void);
	void SetName(string value);
private:
	int _id;
	string _name;
};

