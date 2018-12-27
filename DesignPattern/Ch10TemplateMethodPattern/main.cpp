#include<iostream>
#include<string>
#include"TestPaper.h"
#include "CopyTestPaper.h"
using namespace std;

int main(void)
{
	cout << "学生甲抄的试卷： " << endl;
	CTestPaper* studentA = new CTestPaperA();
	studentA->TestQuestion1();
	studentA->TestQuestion2();
	studentA->TestQuestion3();
	
	cout << "学生乙抄的试卷： " << endl;
	CTestPaper* studentB = new CTestPaperB();
	studentB->TestQuestion1();
	studentB->TestQuestion2();
	studentB->TestQuestion3();
	return 0;
}