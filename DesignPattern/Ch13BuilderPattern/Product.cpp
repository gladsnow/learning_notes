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
	cout << "\n ��Ʒ ���� ----" << endl;
	for each (string part in parts)
	{
		cout << part << endl;
	}
}
