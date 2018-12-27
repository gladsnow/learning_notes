#pragma once
#include "Builder.h"
#include "Product.h"

class CConcreteBuilder2 :
	public CBuilder
{
public:
	CConcreteBuilder2();
	~CConcreteBuilder2();
	void BuildPartA(void);
	void BuildPartB(void);
	CProduct* GetResult(void);
private:
	CProduct* product;
};

