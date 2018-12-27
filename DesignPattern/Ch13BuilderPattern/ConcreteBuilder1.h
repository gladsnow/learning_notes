#pragma once
#include "Builder.h"
#include "Product.h"
class CConcreteBuilder1 :
	public CBuilder
{
public:
	CConcreteBuilder1();
	~CConcreteBuilder1();
	void BuildPartA(void);
	void BuildPartB(void);
	CProduct* GetResult(void);
private:
	CProduct* product;
};

