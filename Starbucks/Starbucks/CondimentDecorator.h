#pragma once
#include "Beverage.h"

class CondimentDecorator abstract : public Beverage
{
protected:
	shared_ptr<Beverage> beverage;

public:
	CondimentDecorator(shared_ptr<Beverage> beverage) : beverage{ beverage } {}
	
	virtual string getDescription() abstract override;
	virtual double cost() abstract override;
};

