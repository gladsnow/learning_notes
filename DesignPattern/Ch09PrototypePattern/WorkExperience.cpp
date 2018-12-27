#include "WorkExperience.h"



CWorkExperience::CWorkExperience()
{
}


CWorkExperience::~CWorkExperience()
{
}

void CWorkExperience::SetWorkDate(string value)
{
	workDate = value;
}
string CWorkExperience::GetWorkDate(void)
{
	return workDate;
}
void CWorkExperience::SetCompany(string value)
{
	company = value;
}
string CWorkExperience::GetCompany(void)
{
	return company;
}