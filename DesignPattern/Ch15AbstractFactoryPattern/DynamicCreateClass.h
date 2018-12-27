#pragma once
#include<string>
#include"ReflectionFactory.h"
using namespace std;

class CDynamicCreateClass
{
public:
	CDynamicCreateClass();
	~CDynamicCreateClass();
	CDynamicCreateClass(string name, createClass method);
};
