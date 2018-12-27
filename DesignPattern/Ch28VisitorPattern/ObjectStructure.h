#pragma once
#include"Person.h"
#include<list>
using namespace std;
class CObjectStructure
{
public:
	CObjectStructure();
	~CObjectStructure();
	void Attach(CPerson* element);
	void Detach(CPerson* element);
	void Display(CAction* visitor);

private:
	list<CPerson*>* elements;
};

