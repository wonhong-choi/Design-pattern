#include "Whip.h"

double Whip::cost() {
	return beverage->cost() + 0.10;
}