#pragma once
#include <string>
#include <iostream>
#include <list>
using namespace std;

class CPizza
{
public:
	CPizza(void);
	~CPizza(void);
	void prepare();
	virtual void bake();
	virtual void cut();
	virtual void box();
	virtual string getName();

public:
	string m_name;
	string m_dough;
	string m_sauce;
	list<string> m_topppings;
};

class CNYStyleCheesePizza : public CPizza
{
public:
	CNYStyleCheesePizza();
	~CNYStyleCheesePizza();

};

class CNYStyleVeggiePizza : public CPizza
{
public:
	CNYStyleVeggiePizza();
	~CNYStyleVeggiePizza();

};

class CNYStyleClamPizza : public CPizza
{
public:
	CNYStyleClamPizza();
	~CNYStyleClamPizza();

};

class CNYStylePepperoniPizza : public CPizza
{
public:
	CNYStylePepperoniPizza();
	~CNYStylePepperoniPizza();

};


class ChicagoStyleCheesePizza : public CPizza
{
public:
	ChicagoStyleCheesePizza();
	~ChicagoStyleCheesePizza();

	virtual void cut();
};

class ChicagoStyleVeggiePizza : public CPizza
{
public:
	ChicagoStyleVeggiePizza();
	~ChicagoStyleVeggiePizza();
	virtual void cut();
};

class ChicagoStyleClamPizza : public CPizza
{
public:
	ChicagoStyleClamPizza();
	~ChicagoStyleClamPizza();
	virtual void cut();
};

class ChicagoStylePepperoniPizza : public CPizza
{
public:
	ChicagoStylePepperoniPizza();
	~ChicagoStylePepperoniPizza();
	virtual void cut();
};


