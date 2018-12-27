#pragma once
#include"HandsetSoft.h"

class CHandsetBrand
{
public:
	CHandsetBrand();
	~CHandsetBrand();
	void SetHandsetSoft(CHandsetSoft* soft);
	virtual void Run(void) = 0;
protected:
	CHandsetSoft* soft;
};

