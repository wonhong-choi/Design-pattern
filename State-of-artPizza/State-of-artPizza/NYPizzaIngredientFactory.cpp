#include "NYPizzaIngredientFactory.h"

unique_ptr<Dough> NYPizzaIngredientFactory::createDough()
{
    return make_unique<ThinCrustDough>();
}

unique_ptr<Sauce> NYPizzaIngredientFactory::createSauce()
{
    return make_unique<MarinaraSauce>();
}

unique_ptr<Cheese> NYPizzaIngredientFactory::createCheese()
{
    return make_unique<ReggianoCheese>();
}

unique_ptr<Clams> NYPizzaIngredientFactory::createClam()
{
    return make_unique<FreshClams>();
}