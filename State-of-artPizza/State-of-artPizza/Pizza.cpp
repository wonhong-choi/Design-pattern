#include "Pizza.h"

void Pizza::bake()
{
    cout << "baking pizza" << endl;
}

void Pizza::cut()
{
    cout << "cutting pizza" << endl;
}

void Pizza::box()
{
    cout << "packing the pizza into box" << endl;
}

string Pizza::getName()
{   
    return name;
}

void Pizza::setName(const string& name)
{
    this->name = name;
}
