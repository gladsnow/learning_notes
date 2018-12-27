#pragma once
#include<string>
using namespace std;

class CPlayContext
{
public:
	CPlayContext();
	~CPlayContext();
	string GetPlayText(void);
	void SetPlayText(string value);
private:
	string text;
};

