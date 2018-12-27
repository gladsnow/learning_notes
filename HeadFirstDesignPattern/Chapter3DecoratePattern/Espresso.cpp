#include "Espresso.h"


CEspresso::CEspresso(void)
{
	m_strDescription = "Espresso";
}


CEspresso::~CEspresso(void)
{
}

double CEspresso::cost()
{
	return 1.99;
}

CHouseBlend::CHouseBlend()
{
	m_strDescription = "House Blend Coffee";
}
CHouseBlend::~CHouseBlend()
{

}

double CHouseBlend::cost()
{
	return 0.89;
}