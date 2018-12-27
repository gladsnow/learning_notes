#pragma once
#include<string>
#include"Country.h"
using namespace std;

class CCountry;
class CUnitedNations
{
public:
	CUnitedNations();
	~CUnitedNations();
	virtual void Declare(string message, CCountry* colleague) = 0;
};

