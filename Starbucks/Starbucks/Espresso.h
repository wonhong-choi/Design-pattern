#pragma once
#include "Beverage.h"

class Espresso : public Beverage
{
public:
	Espresso() : Beverage{ "Espresso" } {}

	virtual double cost() override;
};

