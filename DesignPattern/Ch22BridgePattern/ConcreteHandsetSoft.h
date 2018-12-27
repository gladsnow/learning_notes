#pragma once
#include "HandsetSoft.h"

class CHandsetGame :
	public CHandsetSoft
{
public:
	CHandsetGame();
	~CHandsetGame();
	void Run(void);
};

class HandsetAddressList :public CHandsetSoft
{
public:
	HandsetAddressList();
	~HandsetAddressList();
	void Run(void);
};
