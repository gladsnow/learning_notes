#include "Command.h"

int main(void)
{
	SimpleRemoteControl remote;
	CLight light;
	GarageDoor garage_door;
	GarageDoorOpenCommand* garage_door_open = new GarageDoorOpenCommand(garage_door);
	LightOnCommand* lightOn = new LightOnCommand(light);
	remote.SetCommand(lightOn);
	remote.ButtonWasPressed();
	remote.SetCommand(garage_door_open);
	remote.ButtonWasPressed();
	return 0;
}