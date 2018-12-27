#pragma once
#include"User.h"
class CWebSite
{
public:
	CWebSite();
	~CWebSite();
	virtual void Use(CUser* user) = 0;
};

