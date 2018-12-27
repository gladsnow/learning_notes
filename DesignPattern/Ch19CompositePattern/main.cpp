#include<iostream>
#include"ConcreteCompany.h"
#include"HRDepartment.h"
#include"FinanceDepartment.h"
using namespace std;

int main(void)
{
	CConcreteCompany* root = new CConcreteCompany("�����ܹ�˾");
	root->Add(new CHRDepartment("�ܹ�˾������Դ��"));
	root->Add(new CFinanceDepartment("�ܹ�˾����"));

	CConcreteCompany* comp = new CConcreteCompany("�Ϻ������ֹ�˾");
	comp->Add(new CHRDepartment("�����ֹ�˾������Դ��"));
	comp->Add(new CFinanceDepartment("�����ֹ�˾����"));
	root->Add(comp);

	CConcreteCompany* comp1 = new CConcreteCompany("�Ͼ����´�");
	comp1->Add(new CHRDepartment("�Ͼ����´�������Դ��"));
	comp1->Add(new CFinanceDepartment("�Ͼ����´�����"));
	comp->Add(comp1);

	CConcreteCompany* comp2 = new CConcreteCompany("���ݰ��´�");
	comp2->Add(new CHRDepartment("���ݰ��´�������Դ��"));
	comp2->Add(new CFinanceDepartment("���ݰ��´�����"));
	comp->Add(comp2);

	cout << "\n�ṹͼ�� " << endl;
	root->Display(1);

	cout << "\nְ�� " << endl;
	root->LineOfDuty();

	return 0;
}