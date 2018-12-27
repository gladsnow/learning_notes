#pragma once
#include "State.h"
class CForenoonState :
	public CState
{
public:
	CForenoonState();
	~CForenoonState();
	void WriteProgram(CWork* w);
};

class CNoonState :
	public CState
{
public:
	CNoonState();
	~CNoonState();
	void WriteProgram(CWork* w);
};

class CAfterNoonState :
	public CState
{
public:
	CAfterNoonState();
	~CAfterNoonState();
	void WriteProgram(CWork* w);
};

class CEveningState :
	public CState
{
public:
	CEveningState();
	~CEveningState();
	void WriteProgram(CWork* w);
};

class CSleepingState :
	public CState
{
public:
	CSleepingState();
	~CSleepingState();
	void WriteProgram(CWork* w);
};

class CRestState :
	public CState
{
public:
	CRestState();
	~CRestState();
	void WriteProgram(CWork* w);
};