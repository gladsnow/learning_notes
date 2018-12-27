#include "ConcreteManager.h"
#include <iostream>
using namespace std;


CCommonManager::CCommonManager()
{
}


CCommonManager::~CCommonManager()
{
}

CCommonManager::CCommonManager(string name):CManager(name)
{
}
void CCommonManager::RequestApplications(CRequest* request)
{
	if ((request->GetRequestType() == "请假") && (request->GetNumber() <= 2))
	{
		cout << name << ":" << request->GetRequestContent() << " 数量" << request->GetNumber() << " 被批准" << endl;
	}
	else
	{
		if (superior != nullptr)
		{
			superior->RequestApplications(request);
		}
	}
}

CMajordomo::CMajordomo()
{
}

CMajordomo::~CMajordomo()
{
}

CMajordomo::CMajordomo(string name) :CManager(name)
{
}
void CMajordomo::RequestApplications(CRequest* request)
{
	if ((request->GetRequestType() == "请假") && (request->GetNumber() <= 5))
	{
		cout << name << ":" << request->GetRequestContent() << " 数量" << request->GetNumber() << " 被批准" << endl;
	}
	else
	{
		if (superior != nullptr)
		{
			superior->RequestApplications(request);
		}
	}
}

CGeneralManager::CGeneralManager()
{
}


CGeneralManager::~CGeneralManager()
{
}

CGeneralManager::CGeneralManager(string name) :CManager(name)
{
}
void CGeneralManager::RequestApplications(CRequest* request)
{
	if (request->GetRequestType() == "请假")
	{
		cout << name << ":" << request->GetRequestContent() << " 数量" << request->GetNumber() << " 被批准" << endl;
	}
	else if ((request->GetRequestType() == "加薪") && (request->GetNumber() <= 500))
	{
		cout << name << ":" << request->GetRequestContent() << " 数量" << request->GetNumber() << " 被批准" << endl;
	}
	else if ((request->GetRequestType() == "加薪") && (request->GetNumber() > 500))
	{
		cout << name << ":" << request->GetRequestContent() << " 数量" << request->GetNumber() << " 再说吧" << endl;
	}
}