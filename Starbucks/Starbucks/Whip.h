#pragma once
#include "CondimentDecorator.h"
class Whip : public CondimentDecorator
{
public:
	Whip(shared_ptr<Beverage> beverage) : CondimentDecorator{ beverage } {}
	virtual string getDescription() override{
		return beverage->getDescription() + ", Whip";
	}

	virtual double cost() override;
};

