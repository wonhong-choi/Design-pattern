#pragma once
#include "PizzaStore.h"
#include "CheesePizza.h"
#include "ClamPizza.h"
#include "NYPizzaIngredientFactory.h"

class NYPizzaStore :
    public PizzaStore
{
    virtual unique_ptr<Pizza> createPizza(string type) override;
};

