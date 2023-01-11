#pragma once
#include "PizzaStore.h"
#include "PizzaIngredientFactory.h"
#include "ChicagoPizzaIngredientFactory.h"
#include "CheesePizza.h"
#include "ClamPizza.h"

class ChicagoPizzaStore :
    public PizzaStore
{
    virtual unique_ptr<Pizza> createPizza(string type) override;
};

