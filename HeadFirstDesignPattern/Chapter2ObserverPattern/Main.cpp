#include "WeatherData.h"
#include "CurrentConditionDisplay.h"

int main(void)
{
	CWeatherData* weatherData = new CWeatherData();

	CCurrentConditionDisplay* currentDisplay = new CCurrentConditionDisplay(weatherData);
	
	weatherData->setMeasurements(80,65,30.4f);
	weatherData->setMeasurements(82,70,29.2f);
	weatherData->setMeasurements(78,90,29.2f);
	return 0;
}