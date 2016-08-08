#include "Dog.h"

Dog::Dog(string name, int age):Annimal(name, age)
{
    //ctor
}

Dog::~Dog()
{
    //dtor
}

void Dog::talk(string msg)
{
    cout << "I am dog:" << msg << endl;
}

void Dog::walk()
{
    cout << "Dog walk with four legs." << endl;
}
