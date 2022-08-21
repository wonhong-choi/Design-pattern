#include "ChicagoPizzaIngredientFactory.h"

unique_ptr<Dough> ChicagoPizzaIngredientFactory::createDough()
{
    return make_unique<ThickCrustDough>();
}

unique_ptr<Sauce> ChicagoPizzaIngredientFactory::createSauce()
{
    return make_unique<PlumTomatoSauce>();
}

unique_ptr<Cheese> ChicagoPizzaIngredientFactory::createCheese()
{
    return make_unique<MozzarellaCheese>();
}

unique_ptr<Clams> ChicagoPizzaIngredientFactory::createClam()
{
    return make_unique<FrozenClams>();
}
