#include "ChicagoPizzaStore.h"

unique_ptr<Pizza> ChicagoPizzaStore::createPizza(string type)
{
    unique_ptr<Pizza> pizza{ nullptr };
    shared_ptr<PizzaIngredientFactory> ingredientFactory{ make_shared<ChicagoPizzaIngredientFactory>() };
    if (type.compare("cheese") == 0) {
        pizza = move(make_unique<CheesePizza>(ingredientFactory));
        pizza->setName("Chicago Sytle Cheese Pizza");
    }
    else if (type.compare("clam") == 0) {
        pizza = move(make_unique<ClamPizza>(ingredientFactory));
        pizza->setName("Chicago Style Clam Pizza");
    }

    return pizza;
}