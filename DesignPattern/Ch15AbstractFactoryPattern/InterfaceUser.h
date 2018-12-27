#pragma once
class CInterfaceUser
{
public:
	CInterfaceUser();
	~CInterfaceUser();
	virtual void Insert(CInterfaceUser* user) = 0;
	virtual CInterfaceUser* GetUser(int id) = 0;
};

