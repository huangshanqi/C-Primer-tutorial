#include <iostream>
#include <Dog.h>
#include <Chapter1Test.h>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Dog dog("dog-1", 10);
    dog.talk("talking");

    Chapter1Test chapter1Test;
    chapter1Test.runTest();
    return 0;
}
