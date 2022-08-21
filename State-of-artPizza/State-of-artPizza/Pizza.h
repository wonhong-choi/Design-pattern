#pragma once
#include <string>
#include <memory>
#include <iostream>
#include <vector>

#include "Dough.h"
#include "Sauce.h"
#include "Cheese.h"
#include "Clams.h"


using namespace std;

class Pizza abstract
{
protected:
	string name;

	unique_ptr<Dough> dough;
	unique_ptr<Sauce> sauce;
	unique_ptr<Cheese> cheese;
	unique_ptr<Clams> clam;

public:
	virtual void prepare() abstract;
	void bake();
	void cut();
	void box();

	string getName();
	void setName(const string& name);
};

