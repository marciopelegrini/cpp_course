#include <iostream>
using namespace std;

int main()
{
    string title = "Mr. ";
    string name = "Marcio ";
    string end(10, '!');

    cout << name.size() << endl;
    cout << name.back() << endl;
    cout << name[0] << endl;
   
    name += "Andrei";
    name.append(end);

    cout << name << endl;

    cout << title.append(name) << endl;

    return 0;
}