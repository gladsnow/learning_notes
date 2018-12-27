#pragma once
#include "Country.h"

class CUSA:public CCountry
{
public:
	~CUSA();
	CUSA();
	CUSA(CUnitedNations* mediator);
	void Declare(string message);
	void GetMessage(string message);
};

class CIraq :public CCountry
{
public:
	~CIraq();
	CIraq();
	CIraq(CUnitedNations* mediator);
	void Declare(string message);
	void GetMessage(string message);
};


