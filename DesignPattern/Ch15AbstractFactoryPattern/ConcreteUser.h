#pragma once
#include "User.h"
#include"BaseClass.h"


class CSqlserverUser:
	public CUser,CBaseClass
{
public:
	CSqlserverUser();
	~CSqlserverUser();
	void Insert(CUser* user);
	CUser* GetUser(int id);
	static void* createInstance()
	{
		return new CSqlserverUser();
	}
	DECLARE_CLASS(CSqlserverUser)
};
IMPLEMENT_CLASS(CSqlserverUser)

class CAccessUser:
	public CUser, CBaseClass
{
public:
	CAccessUser();
	~CAccessUser();
	void Insert(CUser* user);
	CUser* GetUser(int id);
	static void* createInstance()
	{
		return new CAccessUser();
	}
	DECLARE_CLASS(CAccessUser)
};
IMPLEMENT_CLASS(CAccessUser)