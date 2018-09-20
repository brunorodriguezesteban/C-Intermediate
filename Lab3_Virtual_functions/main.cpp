#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Person *person1 = new Person("Pedro", "Sanchez Cum Fraude", 46, "Blanco Opresor");
    person1->OutputAge();
}
