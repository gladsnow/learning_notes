#include<iostream>
#include<string>
#include"Person.h"
#include"ConcreteDecorator.h"
using namespace std;

int main(void)
{
	CPerson *xc = new CPerson("小菜");
	cout << "第一种装扮： " << endl;

	CSneakers *pqx = new CSneakers();
	CBigTrouser *kk = new CBigTrouser();
	CTShirts *dtx = new CTShirts();

	pqx->Decorate(xc);
	kk->Decorate(pqx);
	dtx->Decorate(kk);
	dtx->Show();

	cout << "第二种装扮： " << endl;

	CLeatherShoes *px = new CLeatherShoes();
	CTie *ld = new CTie();
	CSuit *xz = new CSuit();

	px->Decorate(xc);
	ld->Decorate(px);
	xz->Decorate(ld);
	xz->Show();

	return 0;
}