#include "OperationFactory.h"
#include "OperationAdd.h"
#include "OperationMul.h"
#include "OperationSub.h"
#include "OperationDiv.h"


COperationFactory::COperationFactory()
{
}


COperationFactory::~COperationFactory()
{
}

COperation* COperationFactory::createOperate(string operate)
{
	COperation *oper = NULL;
	int iOperateAdd = 0;

	if (operate == "+")
	{
		oper = new COperationAdd();
	}
	else if (operate == "-")
	{
		oper = new COperationSub();
	}
	else if (operate =="*")
	{
		oper = new COperationMul();
	}
	else if (operate == "/")
	{
		oper = new COperationDiv();
	}

	return oper;
}