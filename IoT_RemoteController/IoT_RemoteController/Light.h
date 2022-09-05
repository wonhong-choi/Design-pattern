#pragma once
class Light
{
private:
	bool state;
public:
	Light() : state{ false } {}

	bool isOn();

	void on();
	void off();

};

