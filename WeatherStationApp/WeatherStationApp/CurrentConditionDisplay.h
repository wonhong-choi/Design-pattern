#pragma once
#include "IDisplayElement.h"
#include "Observer.h"
#include "WeatherData.h"
#include <iostream>

using namespace std;

class CurrentConditionDisplay : public IDisplayElement, public Observer
{
private:
	float temperature;
	float humidity;
	float pressure;
	WeatherData* weatherdata;

public:
	CurrentConditionDisplay(WeatherData* weatherdata): temperature(0), humidity(0), pressure(0) {
		this->weatherdata = weatherdata;
		weatherdata->registerObserver(this);
	}

	virtual void update(float tmp, float humi, float pres) override;
	virtual void display() override;
};

