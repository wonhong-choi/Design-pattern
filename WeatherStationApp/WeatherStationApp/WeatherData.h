#pragma once
#include "Subject.h"
#include "Observer.h"
#include <vector>

using namespace std;

class WeatherData : public Subject
{
private:
	vector<Observer*> observers;
	float temperature;
	float humidity;
	float pressure;

public:
	virtual void registerObserver(Observer* o) override;
	virtual void removeObserver(Observer* o) override;
	virtual void notifyObservers() override;

	void measurementsChanged();

	void setMeasurements(float temp, float humi, float pres);

};

