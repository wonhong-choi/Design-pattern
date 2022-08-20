#pragma once
class Observer
{
public:
	virtual void update(float tmp, float humi, float pres) abstract;
};

