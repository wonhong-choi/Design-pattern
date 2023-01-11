#include "Duck.h"

void Duck::swim() {
	cout << "duck swiming~" << endl;
}

void Duck::performQuack() {
	currentQuackBehavior->quack();
}

void Duck::performFly() {
	currentFlyableBehavior->fly();
}

void Duck::setFlyableBehavior(IFlyBehavior* flyBehavior) {
	currentFlyableBehavior = flyBehavior;
}

void Duck::setQuackBehavior(IQuackBehavior* quack){
	currentQuackBehavior = quack;
}

void MallardDuck::display() {
	cout << "MallardDuck display~" << endl;
}


void RedheadDuck::display() {
	cout << "RedheadDuck display~" << endl;
}

void RubberDuck::display() {
	cout << "RubberDuck display~" << endl;
}

void ModelDuck::display() {
	cout << "ModelDuck display~" << endl;
}
