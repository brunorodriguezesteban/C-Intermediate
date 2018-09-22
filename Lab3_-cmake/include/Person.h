#ifndef PERSON_H
#define PERSON_H
#include <iostream>

class Person
{
    public:
        Person();
        Person(std::string first_name, std::string last_name, int age, std::string race);
        virtual ~Person();
        virtual void OutputIdentity();
        virtual void OutputAge();

    protected:
        double phone;

    private:
        std::string first_name;
        std::string last_name;
        int age;
        std::string race;



};

#endif // PERSON_H
