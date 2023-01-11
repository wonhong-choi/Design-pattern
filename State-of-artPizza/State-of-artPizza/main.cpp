#include "Pizza.h"
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"

#include <iostream>

using namespace std;

int main() {
	unique_ptr<PizzaStore> nyPizzaStore{ make_unique<NYPizzaStore>() };
	unique_ptr<PizzaStore> chicagoPizzaStore{ make_unique<ChicagoPizzaStore>() };
	
	cout << "NY Store (order #1) : ny cheese Pizza" << endl;
	unique_ptr<Pizza> nycheesePizza{ nyPizzaStore->orderPizza("cheese") };
	cout << nycheesePizza->getName() << " Completed" << endl << endl;
	
	cout << "NY Store (order #2) : ny clam Pizza" << endl;
	unique_ptr<Pizza> nyclamPizza{ nyPizzaStore->orderPizza("clam") };
	cout << nyclamPizza->getName() << " Completed" << endl << endl;

	cout << "Chicago Store (order #1) : chicago cheese Pizza" << endl;
	unique_ptr<Pizza> chicagocheesePizza{ chicagoPizzaStore->orderPizza("cheese") };
	cout << chicagocheesePizza->getName() << " Completed" << endl << endl;
	
	cout << "Chicago Store (order #2) : chicago clam Pizza" << endl;
	unique_ptr<Pizza> chicagoclamPizza{ chicagoPizzaStore->orderPizza("clam") };
	cout << chicagoclamPizza->getName() << " Completed" << endl << endl;

	return 0;
}