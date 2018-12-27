#include "ConcreteFactory.h"
#include"Undergraduate.h"
#include"Volunteer.h"

CUndergraduateFactory::CUndergraduateFactory()
{
}


CUndergraduateFactory::~CUndergraduateFactory()
{
}

CLeiFeng* CUndergraduateFactory::CreateLeiFeng(void)
{
	return (new CUndergraduate());
}

CVolunteerFactory::CVolunteerFactory()
{
}


CVolunteerFactory::~CVolunteerFactory()
{
}

CLeiFeng* CVolunteerFactory::CreateLeiFeng(void)
{
	return (new CVolunteer());
}