#ifndef TEST_H
#define TEST_H

#include <iostream>

using namespace std;


class Test
{
    public:
        Test(){};
        virtual ~Test(){};
        virtual void runTest() = 0;

    protected:

    private:
};

#endif // TEST_H
