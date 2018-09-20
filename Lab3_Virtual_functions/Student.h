#ifndef STUDENT_H
#define STUDENT_H
#include "Headers.h"
#include <iostream>
#include "Person.h"


class Student : public Person
{
    public:
        Student(std::string first_name_, std::string last_name_, int age_, std::string race_);
        virtual ~Student();
        virtual void OutputIdentity(); //function overrided

    protected:

    private:
};

#endif // STUDENT_H
