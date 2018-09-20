#include "Person.h"
#include <iostream>

Person::Person()
{
    //ctor
    this->first_name = "Bruno";
    this->last_name = "Rodríguez";
    this->age = 23;
    this->race = "White caucasian";
}
Person::Person(std::string first_name_, std::string last_name_, int age_, std::string race_)
{
    //ctor
    this->first_name = first_name_;
    this->last_name = last_name_;
    this->age = age_;
    this->race = race_;
}

Person::~Person()
{
    //dtor
}
void Person::OutputIdentity()
{
//return nothing
}

void Person::OutputAge()
{
//Output the age
std::cout<<"I am " << this->age <<" years old"<<std::endl;
}
