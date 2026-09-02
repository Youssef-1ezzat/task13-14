#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <Animal.h>
using namespace std;


class Dog:public Animal

{
public:
    void makeSound() override
    {
        cout<<"Dog:woof woof"<<endl;
    }

};

#endif // DOG_H
