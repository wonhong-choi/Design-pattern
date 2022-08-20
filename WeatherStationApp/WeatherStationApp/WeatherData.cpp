#include "WeatherData.h"

void WeatherData::registerObserver(Observer* o) {
	this->observers.push_back(o);
}

void WeatherData::removeObserver(Observer* o) {
	vector<Observer*>::iterator it;
	for (it = this->observers.begin(); it != observers.end(); ++it) {
		if (* it == o) {
			break;
		}
	}
	this->observers.erase(it);
}

void WeatherData::notifyObservers() {
	for (auto ob : this->observers) {
		ob->update(this->temperature, this->humidity, this->pressure);
	}
}

void WeatherData::measurementsChanged() {
	this->notifyObservers();
}

void WeatherData::setMeasurements(float temp, float humi, float pres) {
	this->temperature = temp;
	this->humidity = humi;
	this->pressure = pres;

	measurementsChanged();
}