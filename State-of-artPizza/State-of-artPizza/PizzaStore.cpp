#include "PizzaStore.h"

unique_ptr<Pizza> PizzaStore::orderPizza(string type)
{
	unique_ptr<Pizza> pizza{ move(createPizza(type)) };

	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();

	return pizza;
}
