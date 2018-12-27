#pragma once
#include "Pizza.h"

class CPizzaStore
{
public:
	CPizzaStore(void);
	~CPizzaStore(void);

	CPizza* orderPizza(string type);

protected:
	virtual CPizza* createPizza(string type);
};

class NYPizzaStore :public CPizzaStore
{
public:
	NYPizzaStore(void);
	~NYPizzaStore(void);
	virtual CPizza* createPizza(string type);
};

class ChicagoPizzaStore :public CPizzaStore
{
public:
	ChicagoPizzaStore(void);
	~ChicagoPizzaStore(void);
	virtual CPizza* createPizza(string type);
};
