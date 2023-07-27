#include <iostream>
using namespace std;

class Person {
public:
    string name;
    Person(string name)
        : name(name)
    {
        cout << "Hello! My name is " << name << endl;
    }
    ~Person()
    {
        cout << name << " saying goodbye." << endl;
    }
};

int main()
{
    Person* pp;

    {
        Person p1("Peter");
        pp = &p1;
    }

    cout << pp->name << endl;
    cout << "End of code! " << endl;
    return 0;
}