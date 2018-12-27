#include "UnitedNationsSecurityCouncil.h"



CUnitedNationsSecurityCouncil::CUnitedNationsSecurityCouncil()
{
}


CUnitedNationsSecurityCouncil::~CUnitedNationsSecurityCouncil()
{
}

void CUnitedNationsSecurityCouncil::Declare(string message, CCountry* colleague)
{
	if (colleague == colleague1)
	{
		colleague2->GetMessage(message);
	}
	else
	{
		colleague1->GetMessage(message);
	}
}

void CUnitedNationsSecurityCouncil::SetUSAColleague(CUSA* value)
{
	colleague1 = value;
}
void CUnitedNationsSecurityCouncil::SetIraqColleague(CIraq* value)
{
	colleague2 = value;
}
