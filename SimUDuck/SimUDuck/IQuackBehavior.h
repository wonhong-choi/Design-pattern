#pragma once
#include <iostream>

using namespace std;

class IQuackBehavior {
public:
	virtual void quack() = 0;
};

class Quack : public IQuackBehavior {
public:
	virtual void quack() override;
};

class Squaek : public IQuackBehavior {
public:
	virtual void quack() override;
};

class MuteQuack : public IQuackBehavior {
public :
	virtual void quack() override;
};
