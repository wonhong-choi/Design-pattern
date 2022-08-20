#include "HeatIndexDisplay.h"
#include "CurrentConditionDisplay.h"
#include "WeatherData.h"


using namespace std;

int main() {
	WeatherData wd;

	CurrentConditionDisplay currendConditionDisplayer(&wd);
	HeatIndexDisplay heatIndexDisplayer(&wd);

	wd.setMeasurements(80, 65, 30.4);
	wd.setMeasurements(82, 70, 29.2);
	wd.setMeasurements(78, 90, 29.2);

	return 0;
}