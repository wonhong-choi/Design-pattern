#pragma once
#include "Beverage.h"

class HouseBlend : public Beverage
{
public:
	HouseBlend() : Beverage{ "HouseBlend" } {}

	virtual double cost() override;
};