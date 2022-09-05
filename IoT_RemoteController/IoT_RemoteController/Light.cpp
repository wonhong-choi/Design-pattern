#include "Light.h"

bool Light::isOn()
{
	return state;
}

void Light::on()
{
	this->state = true;
}

void Light::off()
{
	this->state = false;
}
