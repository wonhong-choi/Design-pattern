#include "GarageDoorOpenCommand.h"

void GarageDoorOpenCommand::execute()
{
	this->garageDoor->open();
}
