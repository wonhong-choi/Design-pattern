#pragma once
#include <iostream>

using namespace std;

class IFlyBehavior {
public:
	virtual void fly() = 0;
};

class FlyWithWings : public IFlyBehavior {
	virtual void fly() override;
};

class FlyNoWay : public IFlyBehavior {
	virtual void fly() override;
};

