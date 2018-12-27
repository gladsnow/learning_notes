#pragma once
#include "GiveGift.h"
#include "SchoolGirl.h"
#include "Pursuit.h"

class CProxy :
	public CGiveGift
{
public:
	CProxy();
	~CProxy();
	CProxy(CSchoolGirl* mm);
	void GiveDolls(void);
	void GiveFlowers(void);
	void GiveChocolate(void);
private:
	CPursuit *gg;
};

