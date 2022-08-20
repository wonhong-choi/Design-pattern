#pragma once
#include "Observer.h"
#include "IDisplayElement.h"
#include "WeatherData.h"
#include <iostream>

using namespace std;

class HeatIndexDisplay : public Observer, public IDisplayElement
{
private:
	float temperature;
	float humidity;
	WeatherData* weatherdata;

public:
	HeatIndexDisplay(WeatherData* weatherdata) : temperature(0), humidity(0) {
		this->weatherdata = weatherdata;
		weatherdata->registerObserver(this);
	}

	virtual void update(float temp, float humi, float pres) override;
	virtual void display() override;


};

