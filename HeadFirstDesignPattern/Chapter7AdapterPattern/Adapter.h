#pragma once

class CDuck
{
public:
	CDuck() {};
	virtual ~CDuck() {};

	virtual void quack() = 0;
	virtual void fly() = 0;
};

class CMallardDuck : public CDuck
{
public:
	CMallardDuck();
	~CMallardDuck();
	void quack();
	void fly();

};

class Turkey
{
public:
	Turkey() {};
	virtual ~Turkey() {};
	virtual void gobble() = 0;
	virtual void fly() = 0;
};

class WildTurkey :public Turkey
{
public:
	WildTurkey();
	~WildTurkey();

	void gobble();
	void fly();
};

class TurkeyAdapter :public CDuck
{
public:
	TurkeyAdapter(Turkey* turkey);
	~TurkeyAdapter();
	void quack();
	void fly();

private:
	Turkey* turkey_;
};