#pragma once
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
class CheesePizza :
    public Pizza
{
private:
    shared_ptr<PizzaIngredientFactory> ingredientFactory;
public :
    CheesePizza(shared_ptr<PizzaIngredientFactory> ingredientFactory) : ingredientFactory{ ingredientFactory } {}

    virtual void prepare() override;
};

