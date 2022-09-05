#pragma once
#include "ICommand.h"
#include <memory>
#include "GarageDoor.h"

using namespace std;

class GarageDoorOpenCommand :
    public ICommand
{
private:
    shared_ptr<GarageDoor> garageDoor;

public:
    GarageDoorOpenCommand(shared_ptr<GarageDoor> garageDoor) : garageDoor{ garageDoor } {}

    virtual void execute() override;
};

