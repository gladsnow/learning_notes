#pragma once
#include "Observer.h"
#include "Subject.h"

class CCurrentConditionDisplay : public CObserver,CDisplayElement
{
public:
	CCurrentConditionDisplay(void);
	CCurrentConditionDisplay(CSubject* weatherData);
	~CCurrentConditionDisplay(void);

public:
	virtual void update(float temp,float humidity,float pressure);
	virtual void display(void);
	float computeHeatIndex(float t, float rh);
private:
	float m_fTemperature;
	float m_fHumidity;
	CSubject* m_weatherData;
};

