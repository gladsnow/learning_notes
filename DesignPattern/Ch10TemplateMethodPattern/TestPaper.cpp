#include "TestPaper.h"
#include<iostream>
using namespace std;
CTestPaper::CTestPaper()
{
}


CTestPaper::~CTestPaper()
{
}

void CTestPaper::TestQuestion1(void)
{
	cout << " ����õ����������˹������������콣��������������������[ ] a.��ĥ���� b.����� c.���ٺϽ�� d.̼����ά " << endl;
	cout << "�𰸣�" << Answer1()<<endl;
}
void CTestPaper::TestQuestion2(void)
{
	cout << " ��������黨�����[ ] a.����ֲ�ﲻ�ٺ��� b.ʹһ��ϡ������� c.�ƻ����Ǹ�����Ȧ����̬ƽ�� d.��ɸõ���ɳĮ�� " << endl;
	cout << "�𰸣�" << Answer2() << endl;
}
void CTestPaper::TestQuestion3(void)
{
	cout << " �������ʹ��ɽʦͽ���ҹ�����Ż�²�ֹ��������Ǵ�򣬻�����ǿ�ʲôҩ[ ] a.��˾ƥ�� b.ţ�ƽⶾƬ c.������ d.�����Ǻȴ���ţ�� e.����ȫ����" << endl;
	cout << "�𰸣�" << Answer3() << endl;
}
string CTestPaper::Answer1(void)
{
	return "";
}
string CTestPaper::Answer2(void)
{
	return "";
}
string CTestPaper::Answer3(void)
{
	return "";
}
