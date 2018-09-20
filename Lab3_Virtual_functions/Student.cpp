#include "Student.h"

Student::Student(std::string first_name_, std::string last_name_, int age_, std::string race_)
:Person(first_name_, last_name_, age_, race_)
{
    std::cout<<std::endl;
    std::cout<<"Create student object: "<<std::endl;
}

Student::~Student()
{
    //dtor
}

void Student::OutputIdentity() //function overrided
{
   std::cout<<"I am a student"<<std::endl;
}

void Student::OutputAge()
{
    std::cout<<"I am a student"<<std::endl;
    Person::OutputAge();
}
