#pragma once
#include<string>
#include"Manager.h"
using namespace std;

class CCommonManager: public CManager
{
public:
	CCommonManager();
	~CCommonManager();
	CCommonManager(string name);
	void RequestApplications(CRequest* request);
};

class CMajordomo: public CManager
{
public:
	CMajordomo();
	~CMajordomo();
	CMajordomo(string name);
	void RequestApplications(CRequest* request);
};

class CGeneralManager: public CManager
{
public:
	CGeneralManager();
	~CGeneralManager();
	CGeneralManager(string name);
	void RequestApplications(CRequest* request);
};


