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
	if ((request->GetRequestType() == "���") && (request->GetNumber() <= 2))
	{
		cout << name << ":" << request->GetRequestContent() << " ����" << request->GetNumber() << " ����׼" << endl;
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
	if ((request->GetRequestType() == "���") && (request->GetNumber() <= 5))
	{
		cout << name << ":" << request->GetRequestContent() << " ����" << request->GetNumber() << " ����׼" << endl;
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
	if (request->GetRequestType() == "���")
	{
		cout << name << ":" << request->GetRequestContent() << " ����" << request->GetNumber() << " ����׼" << endl;
	}
	else if ((request->GetRequestType() == "��н") && (request->GetNumber() <= 500))
	{
		cout << name << ":" << request->GetRequestContent() << " ����" << request->GetNumber() << " ����׼" << endl;
	}
	else if ((request->GetRequestType() == "��н") && (request->GetNumber() > 500))
	{
		cout << name << ":" << request->GetRequestContent() << " ����" << request->GetNumber() << " ��˵��" << endl;
	}
}