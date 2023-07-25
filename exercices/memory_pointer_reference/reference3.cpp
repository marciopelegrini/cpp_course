#include <iostream>
using namespace std;

int main()
{
    string greeting = "Hi!";
    string& ref = greeting;
    string name = "Peter";

    ref = name;

    cout << greeting << "\t" << ref << endl;
    cout << &name << "\t" << &greeting << "\t" << &ref << endl;

    ref.append("!!!!!");

    cout << greeting;

    return 0;
}