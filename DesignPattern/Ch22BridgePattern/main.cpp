#include"ConcreteHandsetBrand.h"
#include"ConcreteHandsetSoft.h"
#include"HandsetBrand.h"

int main(void)
{
	CHandsetBrand* ab = new CHandsetBrandN();

	ab->SetHandsetSoft(new CHandsetGame());
	ab->Run();

	ab->SetHandsetSoft(new HandsetAddressList());
	ab->Run();

	ab = new CHandsetBrandM();
	ab->SetHandsetSoft(new CHandsetGame());
	ab->Run();

	ab->SetHandsetSoft(new HandsetAddressList());
	ab->Run();

	return 0;
}