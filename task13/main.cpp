#include <Shape.h>
#include <Rectalngel.h>
#include <iostream>
#include <Dog.h>
#include <Cat.h>
#include <Student.h>
using namespace std;

int main()
{
    Rectangle1 r(5, 4);
    cout<<"rectangle area="<<r.calculateArea()<<endl;
    Animal* animal;

    Dog dog;
    Cat cat;

    animal = &dog;
    animal->makeSound();

    animal = &cat;
    animal->makeSound();
    Student s1;
    Student s2;
    Student s3;

    cout << "Total Students = "<< Student::studentCount << endl;


    return 0;
}
