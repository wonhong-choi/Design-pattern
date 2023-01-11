#include "CurrentConditionDisplay.h"

void CurrentConditionDisplay::update(float tmp, float humi, float pres) {
	this->temperature = tmp;
	this->humidity = humi;
	this->pressure = pres;

	this->display();
}


void CurrentConditionDisplay::display() {
	cout << "current temperature: " << this->temperature << endl;
	cout << "current humidity: " << this->humidity << endl;
	cout << "current pressure: " << this->pressure << endl;
}
