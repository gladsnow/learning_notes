#include "Product.h"

CProduct::CProduct()
{
}


CProduct::~CProduct()
{
}

void CProduct::Add(string part)
{
	parts.push_front(part);
}

void CProduct::Show(void)
{
	cout << "\n 产品 创建 ----" << endl;
	for each (string part in parts)
	{
		cout << part << endl;
	}
}
