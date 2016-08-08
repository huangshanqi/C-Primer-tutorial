#ifndef DOG_H
#define DOG_H

#include <Annimal.h>


class Dog : public Annimal
{
    public:
        Dog(string name, int age);
        virtual ~Dog();
        virtual void talk(string msg);
        virtual void walk();

    protected:

    private:
};

#endif // DOG_H
