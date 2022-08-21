#pragma once
#include <memory>
#include <vector>
#include "Dough.h"
#include "Sauce.h"
#include "Cheese.h"
#include "Clams.h"

using namespace std;

class PizzaIngredientFactory abstract
{
public:
	virtual unique_ptr<Dough> createDough() abstract;
	virtual unique_ptr<Sauce> createSauce() abstract;
	virtual unique_ptr<Cheese> createCheese() abstract;
	virtual unique_ptr<Clams> createClam() abstract;
};