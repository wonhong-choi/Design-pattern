#pragma once
#include <string>
#include <memory>
#include "Pizza.h"

using namespace std;

class PizzaStore abstract
{
public:
	unique_ptr<Pizza> orderPizza(string type);

	virtual unique_ptr<Pizza> createPizza(string type) abstract;
};

