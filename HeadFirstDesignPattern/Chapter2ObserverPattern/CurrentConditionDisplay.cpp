#include "CurrentConditionDisplay.h"
#include <iostream>
using namespace std;

CCurrentConditionDisplay::CCurrentConditionDisplay(void)
{
}

CCurrentConditionDisplay::CCurrentConditionDisplay(CSubject* weatherData)
{
	this->m_weatherData = weatherData;
	weatherData->registerObserver(this);
}

CCurrentConditionDisplay::~CCurrentConditionDisplay(void)
{
}

void CCurrentConditionDisplay::update(float temp,float humidity,float pressure)
{
	this->m_fTemperature = temp;
	this->m_fHumidity = humidity;
	display();
}

float CCurrentConditionDisplay::computeHeatIndex(float t, float rh) 
{
	float index = (float)((16.923 + (0.185212 * t) + (5.37941 * rh) - (0.100254 * t * rh) +
		(0.00941695 * (t * t)) + (0.00728898 * (rh * rh)) +
		(0.000345372 * (t * t * rh)) - (0.000814971 * (t * rh * rh)) +
		(0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t)) + (0.0000291583 *  
		(rh * rh * rh)) + (0.00000142721 * (t * t * t * rh)) +
		(0.000000197483 * (t * rh * rh * rh)) - (0.0000000218429 * (t * t * t * rh * rh)) +     
		0.000000000843296 * (t * t * rh * rh * rh)) -
		(0.0000000000481975 * (t * t * t * rh * rh * rh)));
	return index;
}

void CCurrentConditionDisplay::display(void)
{
	std::cout << "Current conditions: " << m_fTemperature << " F degrees and " << m_fHumidity << "% humidity" << endl;
	std::cout << "Heat index is " << computeHeatIndex(m_fTemperature,m_fHumidity) << endl;
}