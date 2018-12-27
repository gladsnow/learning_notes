#include "Command.h"
#include <iostream>


Command::Command()
{
}


Command::~Command()
{
}


CLight::CLight()
{

}
CLight::~CLight()
{

}

void CLight::On()
{
	std::cout<< "light is on" << std::endl;
}
void CLight::Off()
{
	std::cout << "light is off" << std::endl;
}

LightOnCommand::LightOnCommand(CLight& light)
{
	light_ = light;
}

LightOnCommand::~LightOnCommand()
{
}

void LightOnCommand::execute()
{
	light_.On();
}


GarageDoor::GarageDoor()
{

}

GarageDoor::~GarageDoor()
{

}

void GarageDoor::up()
{
	std::cout << "GarageDoor is up." << std::endl;
}
void GarageDoor::down()
{
	std::cout << "GarageDoor is down." << std::endl;
}
void GarageDoor::stop()
{
	std::cout << "GarageDoor stop." << std::endl;
}
void GarageDoor::lightOn()
{
	std::cout << "GarageDoor lightOn." << std::endl;
}
void GarageDoor::lightOff()
{
	std::cout << "GarageDoor lightOff." << std::endl;
}


GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor& garageDoor)
{
	garage_door_ = garageDoor;
}
GarageDoorOpenCommand::GarageDoorOpenCommand()
{

}
void GarageDoorOpenCommand::execute()
{
	garage_door_.up();
	garage_door_.lightOn();
}

SimpleRemoteControl::SimpleRemoteControl()
{
	slot_ = NULL;
}
SimpleRemoteControl::~SimpleRemoteControl()
{

}

void SimpleRemoteControl::SetCommand(Command* command)
{
	slot_ = command;
}

void SimpleRemoteControl::ButtonWasPressed()
{
	slot_->execute();
}