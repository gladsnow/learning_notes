#include<iostream>
#include<string>
#include"TestPaper.h"
#include "CopyTestPaper.h"
using namespace std;

int main(void)
{
	cout << "ѧ���׳����Ծ� " << endl;
	CTestPaper* studentA = new CTestPaperA();
	studentA->TestQuestion1();
	studentA->TestQuestion2();
	studentA->TestQuestion3();
	
	cout << "ѧ���ҳ����Ծ� " << endl;
	CTestPaper* studentB = new CTestPaperB();
	studentB->TestQuestion1();
	studentB->TestQuestion2();
	studentB->TestQuestion3();
	return 0;
}