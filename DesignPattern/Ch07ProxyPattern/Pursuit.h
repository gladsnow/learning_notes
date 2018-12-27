#pragma once
#include "GiveGift.h"
#include"SchoolGirl.h"

class CPursuit :
	public CGiveGift
{
public:
	CPursuit();
	~CPursuit();
	CPursuit(CSchoolGirl *mm);
	void GiveDolls(void);
	void GiveFlowers(void);
	void GiveChocolate(void);

private:
	CSchoolGirl *mm;
};

