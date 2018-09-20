#ifndef TEACHER_H
#define TEACHER_H
#include "Person.h"


class Teacher : public Person
{
    public:
        Teacher();
        Teacher(std::string first_name_, std::string last_name_, int age_, std::string race_);
        virtual ~Teacher();
        virtual void OutputIdentity(); //function overrided
        virtual void OutputAge();

    protected:

    private:
};

#endif // TEACHER_H
