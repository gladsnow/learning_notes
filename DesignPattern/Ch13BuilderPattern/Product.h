#pragma once
#include<iostream>
#include<list>
#include<string>
#include <vector>
using namespace std;

class CProduct
{
public:
	CProduct();
	~CProduct();
	void Add(string part);
	void Show(void);
	list<string> parts;
};

