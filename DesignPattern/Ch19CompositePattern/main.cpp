#include<iostream>
#include"ConcreteCompany.h"
#include"HRDepartment.h"
#include"FinanceDepartment.h"
using namespace std;

int main(void)
{
	CConcreteCompany* root = new CConcreteCompany("北京总公司");
	root->Add(new CHRDepartment("总公司人力资源部"));
	root->Add(new CFinanceDepartment("总公司财务部"));

	CConcreteCompany* comp = new CConcreteCompany("上海华东分公司");
	comp->Add(new CHRDepartment("华东分公司人力资源部"));
	comp->Add(new CFinanceDepartment("华东分公司财务部"));
	root->Add(comp);

	CConcreteCompany* comp1 = new CConcreteCompany("南京办事处");
	comp1->Add(new CHRDepartment("南京办事处人力资源部"));
	comp1->Add(new CFinanceDepartment("南京办事处财务部"));
	comp->Add(comp1);

	CConcreteCompany* comp2 = new CConcreteCompany("杭州办事处");
	comp2->Add(new CHRDepartment("杭州办事处人力资源部"));
	comp2->Add(new CFinanceDepartment("杭州办事处财务部"));
	comp->Add(comp2);

	cout << "\n结构图： " << endl;
	root->Display(1);

	cout << "\n职责： " << endl;
	root->LineOfDuty();

	return 0;
}