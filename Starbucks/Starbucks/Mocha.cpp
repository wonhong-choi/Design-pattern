#include "Mocha.h"

string Mocha::getDescription() {
	return beverage->getDescription() + ", Mocha";
}

double Mocha::cost() {
	return beverage->cost() + 0.20;
}
