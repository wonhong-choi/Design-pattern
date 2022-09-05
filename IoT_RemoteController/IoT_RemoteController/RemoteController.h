#pragma once
#include "ICommand.h"
#include <memory>

using namespace std;

class RemoteController
{
private:
	shared_ptr<ICommand> slot;

public:
	RemoteController() {}

	void setCommand(shared_ptr<ICommand> command);
	
	void buttonWasPressed();

};

