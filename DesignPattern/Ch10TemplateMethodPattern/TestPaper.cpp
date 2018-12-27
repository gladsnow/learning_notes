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
	cout << " 杨过得到，后来给了郭靖，练成倚天剑和屠龙刀的玄铁可能是[ ] a.球磨铸铁 b.马口铁 c.高速合金钢 d.碳素纤维 " << endl;
	cout << "答案：" << Answer1()<<endl;
}
void CTestPaper::TestQuestion2(void)
{
	cout << " 杨过铲除情花，造成[ ] a.这种植物不再害人 b.使一种稀物种灭绝 c.破坏了那个生物圈的生态平衡 d.造成该地区沙漠化 " << endl;
	cout << "答案：" << Answer2() << endl;
}
void CTestPaper::TestQuestion3(void)
{
	cout << " 蓝凤凰致使华山师徒和桃谷六仙呕吐不止，如果你是大夫，会给他们开什么药[ ] a.阿司匹林 b.牛黄解毒片 c.氟哌酸 d.让他们喝大量牛奶 e.以上全不对" << endl;
	cout << "答案：" << Answer3() << endl;
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
