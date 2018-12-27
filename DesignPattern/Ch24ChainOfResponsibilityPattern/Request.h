#pragma once
#include<string>
using namespace std;

class CRequest
{
public:
	CRequest();
	~CRequest();
	void SetRequestType(string value);
	string GetRequestType(void);
	void SetRequestContent(string value);
	string GetRequestContent(void);
	void SetNumber(int value);
	int GetNumber(void);
private:
	string requestType;
	string requestContent;
	int number;
};

