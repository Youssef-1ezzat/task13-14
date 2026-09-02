#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;

class Student
{
 public:
    static int studentCount;

    Student()
    {
        studentCount++;
    }
};

int Student::studentCount = 0;

#endif // STUDENT_H
