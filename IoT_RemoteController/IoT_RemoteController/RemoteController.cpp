#include "RemoteController.h"

void RemoteController::setCommand(shared_ptr<ICommand> command)
{
	this->slot = command;
}

void RemoteController::buttonWasPressed()
{
	this->slot->execute();
}
