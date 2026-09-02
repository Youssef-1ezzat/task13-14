#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <Animal.h>

using namespace std;


class Cat:public Animal
{
public:

    void makeSound() override
{
    cout<<"Cat: meow meow "<<endl;
};
public:

};

#endif // CAT_H
