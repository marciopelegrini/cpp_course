#include <iostream>
using namespace std;

typedef int id;
// typedef long counter;
using counter = long;  //newer in C++ 11

int main()
{
    id a = 5;
    counter b = 10;

    cout << a + b << endl;

    return 0;
}