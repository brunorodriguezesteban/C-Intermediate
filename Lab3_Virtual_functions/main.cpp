#include "Headers.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Person *person1 = new Person;
    person1->OutputAge();

    Student *student1 = new Student("Pedro", "Sanchez Cum Fraude", 46, "Blanco Opresor");//7
    student1->OutputAge();
    student1->OutputIdentity();
}
