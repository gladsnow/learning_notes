#pragma once
#include"UnitedNations.h"
#include"ConcreteCountry.h"

class CUnitedNationsSecurityCouncil:public CUnitedNations
{
public:
	CUnitedNationsSecurityCouncil();
	~CUnitedNationsSecurityCouncil();
	void Declare(string message, CCountry* colleague);
	void SetUSAColleague(CUSA* value);
	void SetIraqColleague(CIraq* value);
private:
	CUSA* colleague1;
	CIraq* colleague2;
};

