#pragma once
class Command
{
public:
	Command();
	virtual ~Command();

	virtual void execute() = 0;
};

class CLight
{
public:
	CLight();
	~CLight();
	
	void On();
	void Off();
};

class LightOnCommand : public Command
{
public:
	LightOnCommand(CLight& light);
	~LightOnCommand();

	void execute();

private:
	CLight light_;
};

class GarageDoor
{
public:
	GarageDoor();
	~GarageDoor();

	void up();
	void down();
	void stop();
	void lightOn();
	void lightOff();
};

class GarageDoorOpenCommand :public Command
{
public:
	GarageDoorOpenCommand(GarageDoor& garageDoor);
	GarageDoorOpenCommand();
	void execute();

private:
	GarageDoor garage_door_;
};

class SimpleRemoteControl
{
public:
	SimpleRemoteControl();
	~SimpleRemoteControl();

	void SetCommand(Command* command);
	void ButtonWasPressed();
private:
	Command* slot_;
};

