#pragma once
#include "Subject.h"
#include <list>

using namespace std;

class CWeatherData : public CSubject
{
public:
	CWeatherData(void);
	~CWeatherData(void);

public:
	virtual void registerObserver(CObserver* ob);
	virtual void removeObserver(CObserver* ob);
	virtual void notifyObservers();
	void measurementsChanged(void);
	void setMeasurements(float temperature,float humidity,float pressure);

private:
	list<CObserver*> m_listObservers;
	float m_fTemperature;
	float m_fHumidity;
	float m_fPressure;
};

