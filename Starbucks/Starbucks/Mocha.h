#pragma once
#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator
{
public:
	Mocha(shared_ptr<Beverage> beverage) : CondimentDecorator{ beverage } {}

	virtual string getDescription() override;

	virtual double cost() override;

};

