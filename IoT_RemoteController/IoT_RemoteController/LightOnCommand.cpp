#include "LightOnCommand.h"

LightOnCommand::LightOnCommand(shared_ptr<Light> light)
{
	this->light = light;
}

void LightOnCommand::execute()
{
	this->light->on();
}
