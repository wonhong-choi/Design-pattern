#include "ClamPizza.h"

void ClamPizza::prepare()
{
	this->cheese = ingredientFactory->createCheese();
	this->clam = ingredientFactory->createClam();
	this->dough = ingredientFactory->createDough();
	this->sauce = ingredientFactory->createSauce();
}
