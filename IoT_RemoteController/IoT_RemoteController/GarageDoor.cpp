#include "GarageDoor.h"

bool GarageDoor::getOpenState()
{
    return this->isOpened;
}

void GarageDoor::open()
{
    this->isOpened = true;
}

void GarageDoor::close()
{
    this->isOpened = false;
}
