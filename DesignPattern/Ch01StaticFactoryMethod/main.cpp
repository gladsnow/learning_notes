#include <iostream>
#include <exception>
#include <string>
#include "OperationFactory.h"
#include "Operation.h"
using namespace std;

int main(void)
{
	string strNumberA = "";
	string strOperate = "";
	string strNumberB = "";
	double fResult = 0;
	COperation *oper;
	COperationFactory operFactory;
	cout << "ÇëÊäÈëÊý×ÖA£º " << endl;
	cin >> strNumberA;
	cout << "ÇëÑ¡ÔñÔËËã·ûºÅ£¨+¡¢-¡¢*¡¢/): " << endl;
	cin >> strOperate;
	cout << "ÇëÊäÈëÊý×ÖB£º " << endl;
	cin >> strNumberB;
	oper = operFactory.createOperate(strOperate);
	oper->SetNumberA(atof(strNumberA.c_str()));
	oper->SetNumberB(atof(strNumberB.c_str()));
	fResult = oper->GetResult();
	cout << strNumberA << " " << strOperate << " " << strNumberB << "=" << " " << fResult << endl;

	return 0;
}