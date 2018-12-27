#include "WeatherData.h"
#include "Observer.h"

CWeatherData::CWeatherData(void)
{
}


CWeatherData::~CWeatherData(void)
{
	m_listObservers.clear();
}

void CWeatherData::registerObserver(CObserver* ob)
{
	m_listObservers.push_back(ob);
}
void CWeatherData::removeObserver(CObserver* ob)
{
	m_listObservers.remove(ob);
}
void CWeatherData::notifyObservers()
{
	list<CObserver*>::iterator iter;
	for(iter = m_listObservers.begin();iter != m_listObservers.end();iter++)
	{
		CObserver* observer = *iter;
		observer->update(m_fTemperature,m_fHumidity,m_fPressure);
	}
}
void CWeatherData::measurementsChanged(void)
{
	notifyObservers();
}

void CWeatherData::setMeasurements(float temperature,float humidity,float pressure)
{
	this->m_fTemperature = temperature;
	this->m_fHumidity = humidity;
	this->m_fPressure = pressure;
	measurementsChanged();
}
