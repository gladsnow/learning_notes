#include "Finery.h"



CFinery::CFinery()
{
}


CFinery::~CFinery()
{
}

void CFinery::Decorate(CPerson* component)
{
	this->component = component;
}

void CFinery::Show(void)
{
	if (component != nullptr)
	{
		component->Show();
	}
}
