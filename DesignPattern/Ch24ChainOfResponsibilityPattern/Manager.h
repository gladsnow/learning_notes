#pragma once
#include<string>
#include"Request.h"
using namespace std;
class CManager
{
public:
	CManager();
	~CManager();
	CManager(string name);
	void SetSuperior(CManager *superior);
	virtual void RequestApplications(CRequest* request) = 0;
protected:
	string name;
	CManager* superior;
};

