#pragma once
#include "CondimentDecorator.h"
class Soy : public CondimentDecorator
{
public:
	Soy(shared_ptr<Beverage> beverage) : CondimentDecorator{ beverage } {}

	virtual string getDescription() override {
		return beverage->getDescription() + ", Soy";
	}

	virtual double cost() override;

};

