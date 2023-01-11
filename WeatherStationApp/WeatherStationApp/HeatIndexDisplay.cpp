#include "HeatIndexDisplay.h"

void HeatIndexDisplay::update(float temp, float humi, float pres) {
	this->temperature = temp;
	this->humidity = humi;

	this->display();
}

void HeatIndexDisplay::display() {
	cout << "HeatIndex : " << this->temperature * this->humidity << endl;
}
