#include"Barbecuer.h"
#include"ConcreteCmd.h"
#include"Cmd.h"
#include"Waiter.h"

int main(void)
{
	CBarbecuer* boy = new CBarbecuer();
	CCmd* bakeMuttonCmd1 = new CBakeMuttonCmd(boy);
	CCmd* bakeMuttonCmd2 = new CBakeMuttonCmd(boy);
	CCmd* bakeChickenWingCmd1 = new CBakeChickenWingCmd(boy);
	CWaiter* girl = new CWaiter();

	girl->SetOrder(bakeMuttonCmd1);
	girl->CancelOrder(bakeMuttonCmd2);
	girl->SetOrder(bakeChickenWingCmd1);
	girl->Notify();

	return 0;
}