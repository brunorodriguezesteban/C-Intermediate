#include "Teacher.h"

Teacher::Teacher():Person()
{
}

Teacher::Teacher(std::string first_name_, std::string last_name_, int age_, std::string race_)
:Person(first_name_, last_name_,age_, race_)
{
    //ctor
    std::cout<<std::endl;
    std::cout<<"Create teacher object: "<<std::endl;
}


Teacher::~Teacher()
{
    //dtor
}

void Teacher::OutputIdentity() //function overrided
{
   std::cout<<"I am a teacher"<<std::endl;
}

void Teacher::OutputAge()
{
    std::cout<<"I am a teacher"<<std::endl;
    Person::OutputAge();
}

