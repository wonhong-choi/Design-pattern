#pragma once
#include "ICommand.h"
#include <memory>
#include "Light.h"

using namespace std;

class LightOnCommand :
    public ICommand
{
private:
    shared_ptr<Light> light;

public:
    LightOnCommand(shared_ptr<Light> light);
    virtual void execute() override;
};

