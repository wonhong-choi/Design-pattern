#pragma once
#include "Observer.h"

class Subject
{
public:
	virtual void registerObserver(Observer* o) abstract;
	virtual void removeObserver(Observer* o) abstract;
	virtual void notifyObservers() abstract;
};

