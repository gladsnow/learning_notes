#pragma once
#include"TestPaper.h"
#include<string>
using namespace std;

class CTestPaperA :public CTestPaper
{
public:
	CTestPaperA();
	~CTestPaperA();
protected:
	string Answer1(void);
	string Answer2(void);
	string Answer3(void);
};

class CTestPaperB :public CTestPaper
{
public:
	CTestPaperB();
	~CTestPaperB();
protected:
	string Answer1(void);
	string Answer2(void);
	string Answer3(void);
};

