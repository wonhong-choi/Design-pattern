#pragma once
#include "PizzaIngredientFactory.h"
class ChicagoPizzaIngredientFactory :
    public PizzaIngredientFactory
{
	virtual unique_ptr<Dough> createDough() override;
	virtual unique_ptr<Sauce> createSauce() override;
	virtual unique_ptr<Cheese> createCheese() override;
	virtual unique_ptr<Clams> createClam() override;
};

