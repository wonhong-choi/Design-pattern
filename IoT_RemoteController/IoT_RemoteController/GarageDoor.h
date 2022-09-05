#pragma once
class GarageDoor
{
private:
	bool isOpened;
public:
	GarageDoor() : isOpened{ false } {}

	bool getOpenState();
	void open();
	void close();

};

