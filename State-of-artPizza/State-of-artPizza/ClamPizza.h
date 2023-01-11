#pragma once
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
class ClamPizza :
    public Pizza
{
private:
    shared_ptr<PizzaIngredientFactory> ingredientFactory;
public:
    ClamPizza(shared_ptr<PizzaIngredientFactory> ingredientFactory) : ingredientFactory{ ingredientFactory } {}

    virtual void prepare() override;
};