#include "RemoteController.h"
#include "Light.h"
#include "GarageDoor.h"
#include "GarageDoorOpenCommand.h"
#include "LightOnCommand.h"
#include <iostream>

using namespace std;

int main() {
	RemoteController remocon;
	shared_ptr<Light> stand{ make_shared<Light>() };

	remocon.setCommand(make_shared<LightOnCommand>(stand));
	
	cout << boolalpha << "current >> stand : " << stand->isOn() << endl;
	remocon.buttonWasPressed();
	cout << boolalpha << "current >> stand : " << stand->isOn() << endl;

	shared_ptr<GarageDoor> garageDoor{ make_shared<GarageDoor>() };

	remocon.setCommand(make_shared<GarageDoorOpenCommand>(garageDoor));
	cout << boolalpha << "current >> garage door : " << garageDoor->getOpenState() << endl;
	remocon.buttonWasPressed();
	cout << boolalpha << "current >> garage door : " << garageDoor->getOpenState() << endl;

	return 0;
}