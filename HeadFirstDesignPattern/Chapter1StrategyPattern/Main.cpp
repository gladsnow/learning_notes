#include <iostream>
#include "Duck.h"
#include "MallardDuck.h"
#include "ModelDuck.h"
#include "FlyWithWings.h"

using namespace std;

int main(void)
{
	CDuck* mallard = new CMallardDuck();
	mallard->performQuack();
	mallard->performFly();

	CDuck* model = new CModelDuck();
	model->performFly();
	model->setFlyBehavior(new CFlyRocketPowered());
	model->performFly();

	return 0;
}