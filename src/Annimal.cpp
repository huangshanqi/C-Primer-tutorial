#include "Annimal.h"

Annimal::Annimal(string name, int age)
{
    //ctor
    this->name = name;
    this->age = age;
}

Annimal::~Annimal()
{
    //dtor
}

int Annimal::getAge()
{
    return this->age;
}

string Annimal::getName()
{
    return this->name;
}
