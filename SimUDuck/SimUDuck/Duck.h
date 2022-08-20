#pragma once

#include "IFlyBehavior.h"
#include "IQuackBehavior.h"

class Duck abstract {
protected:
	IFlyBehavior* currentFlyableBehavior;
	IQuackBehavior* currentQuackBehavior;
public:
	~Duck() {
		delete currentFlyableBehavior;
		delete currentQuackBehavior;
	}
	virtual void swim();
	
	void performQuack();
	void performFly();
	virtual void display() abstract;

	void setFlyableBehavior(IFlyBehavior* flyBehavior);
	void setQuackBehavior(IQuackBehavior* quack);
};


class MallardDuck : public Duck {
public:
	MallardDuck() {
		currentFlyableBehavior = new FlyWithWings();
		currentQuackBehavior = new Quack();
	}
	virtual void display() override;
};

class RedheadDuck : public Duck {
public:
	RedheadDuck() {
		currentFlyableBehavior = new FlyWithWings();
		currentQuackBehavior = new Squaek();
	}
	virtual void display() override;
};

class RubberDuck : public Duck {
public:
	RubberDuck() {
		currentFlyableBehavior = new FlyNoWay();
		currentQuackBehavior = new MuteQuack();
	}
	virtual void display() override;
};


class ModelDuck : public Duck {
public:
	ModelDuck() {
		currentFlyableBehavior = new FlyNoWay();
		currentQuackBehavior = new MuteQuack();
	}
	virtual void display() override;
};