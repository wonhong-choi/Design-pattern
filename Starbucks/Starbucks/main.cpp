#include <iostream>
#include "Espresso.h"
#include "HouseBlend.h"
#include "Mocha.h"
#include "Whip.h"
#include "Soy.h"


using namespace std;

int main() {
	
	unique_ptr<Beverage> esspresso{ make_unique<Espresso>() };
	cout << esspresso->getDescription() << " $" << esspresso->cost() << endl;

	unique_ptr<Beverage> whipHouseBlend{ make_unique<Whip>(make_unique<HouseBlend>()) };
	cout << whipHouseBlend->getDescription() << " $" << whipHouseBlend->cost() << endl;

	unique_ptr<Beverage> whipwhipHouseBlend{ make_unique<Whip>(make_unique<Whip>(make_unique<HouseBlend>())) };
	cout << whipwhipHouseBlend->getDescription() << " $" << whipwhipHouseBlend->cost() << endl;

	return 0;
}