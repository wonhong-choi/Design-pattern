#include "NYPizzaStore.h"

unique_ptr<Pizza> NYPizzaStore::createPizza(string type)
{
    unique_ptr<Pizza> pizza{nullptr};
    shared_ptr<PizzaIngredientFactory> ingredientFactory{ make_shared<NYPizzaIngredientFactory>() };
    if (type.compare("cheese")==0) {
        pizza = move(make_unique<CheesePizza>(ingredientFactory));
        pizza->setName("NY Sytle Cheese Pizza");
    }
    else if (type.compare("clam") == 0) {
        pizza = move(make_unique<ClamPizza>(ingredientFactory));
        pizza->setName("NY Style Clam Pizza");
    }

    return pizza;
}
