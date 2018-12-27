#pragma once
#include <iostream>
using namespace std;

class CQuackBehavior
{

public:
	virtual void quack() = 0;
};

class CQuack : public CQuackBehavior
{
public:
	CQuack(void);
	~CQuack(void);

public:
	void quack();
};

class CMuteQuack : public CQuackBehavior 
{
public:
	CMuteQuack(void);
	~CMuteQuack(void);
public:
	void quack();
};

class CSqueak : public CQuackBehavior
{
public:
	CSqueak();
	~CSqueak();

public:
	void quack();

};


