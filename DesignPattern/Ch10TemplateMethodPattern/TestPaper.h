#pragma once
#include<string>
using namespace std;

class CTestPaper
{
public:
	CTestPaper();
	~CTestPaper();
	void TestQuestion1(void);
	void TestQuestion2(void);
	void TestQuestion3(void);
protected:
	virtual string Answer1(void);
	virtual string Answer2(void);
	virtual string Answer3(void);

};

