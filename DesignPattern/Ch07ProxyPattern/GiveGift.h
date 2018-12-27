#pragma once
class CGiveGift
{
public:
    CGiveGift();
    ~CGiveGift();
	virtual void GiveDolls(void) = 0;
	virtual void GiveFlowers(void) = 0;
	virtual void GiveChocolate(void) = 0;
};

