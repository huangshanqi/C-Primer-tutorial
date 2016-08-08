#ifndef ANNIMAL_H
#define ANNIMAL_H
#include <iostream>
#include <string>

using namespace std;


class Annimal
{
    public:
        Annimal(string name, int age);
        virtual ~Annimal();
        virtual void talk(string msg) = 0;
        virtual void walk() = 0;
        string getName();
        int getAge();

    protected:

    private:
        string name;
        int age;
};

#endif // ANNIMAL_H
