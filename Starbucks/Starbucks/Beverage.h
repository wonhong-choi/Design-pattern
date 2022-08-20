#pragma once
#include <string>
#include <memory>

using namespace std;

class Beverage abstract
{
protected:
	string description;

public:
	Beverage() : description{ "no description" } {}
	Beverage(const string& descript) : description{ descript } {}
	virtual string getDescription() {
		return description;
	}

	virtual double cost() abstract;
};
