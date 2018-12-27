#include "UnitedNationsSecurityCouncil.h"
#include"ConcreteCountry.h"

int main(void)
{
	CUnitedNationsSecurityCouncil* UNSC = new CUnitedNationsSecurityCouncil();
	CUSA* c1 = new CUSA(UNSC);
	CIraq* c2 = new CIraq(UNSC);

	UNSC->SetUSAColleague(c1);
	UNSC->SetIraqColleague(c2);
	c1->Declare("不准研制核武器，否则要发动战争！");
	c2->Declare("我们没有核武器，也不怕侵略。");

	return 0;
}