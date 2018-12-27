#pragma once

class CObserver
{
public:
	virtual void update(float temp,float humidity,float pressure) = 0;
};

class CDisplayElement
{
	virtual void display(void) = 0;

};
