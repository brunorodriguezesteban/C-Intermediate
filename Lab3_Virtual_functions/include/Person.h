#ifndef PERSON_H
#define PERSON_H


class Person
{
    public:
        Person();
        virtual ~Person();

    protected:
        double phone;

    private:
        std::string first_name;
        std::string last_name;
        int age;
        std::string race;

};

#endif // PERSON_H
