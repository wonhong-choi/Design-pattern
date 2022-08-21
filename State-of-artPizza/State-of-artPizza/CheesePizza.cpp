#include "CheesePizza.h"

void CheesePizza::prepare()
{
	this->dough = ingredientFactory->createDough();
	this->cheese = ingredientFactory->createCheese();
	this->sauce = ingredientFactory->createSauce();
	this->clam= ingredientFactory->createClam();
}
