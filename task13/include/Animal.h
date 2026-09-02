#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void makeSound()
    {
        cout<<"Animal makes a sound"<<endl;
    }
};

#endif // ANIMAL_H
