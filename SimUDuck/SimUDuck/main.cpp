#include "Duck.h"

int main() {
	Duck* mallard = new MallardDuck();
	mallard->display();
	mallard->performFly();
	mallard->performQuack();

	Duck* rubber = new RubberDuck();
	rubber->display();
	rubber->performFly();
	rubber->performQuack();

	Duck* modelduck = new ModelDuck();
	modelduck->display();
	modelduck->performFly();
	modelduck->performQuack();

	modelduck->setFlyableBehavior(new FlyWithWings());
	modelduck->performFly();

	delete mallard;
	delete rubber;
	delete modelduck;

	return 0;
}