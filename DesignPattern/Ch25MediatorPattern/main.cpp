#include "UnitedNationsSecurityCouncil.h"
#include"ConcreteCountry.h"

int main(void)
{
	CUnitedNationsSecurityCouncil* UNSC = new CUnitedNationsSecurityCouncil();
	CUSA* c1 = new CUSA(UNSC);
	CIraq* c2 = new CIraq(UNSC);

	UNSC->SetUSAColleague(c1);
	UNSC->SetIraqColleague(c2);
	c1->Declare("��׼���ƺ�����������Ҫ����ս����");
	c2->Declare("����û�к�������Ҳ�������ԡ�");

	return 0;
}