#pragma once
#include "Factory.h"
class CUndergraduateFactory :
	public CFactory
{
public:
	CUndergraduateFactory();
	~CUndergraduateFactory();
	CLeiFeng* CreateLeiFeng(void);
};

class CVolunteerFactory :
	public CFactory
{
public:
	CVolunteerFactory();
	~CVolunteerFactory();
	CLeiFeng* CreateLeiFeng(void);
};

