#include <iostream>
using namespace std;

int incCopy(int value)
{
    value++;
    value++;
    value++;
}

int incRef(int& value)
{
    value++;
    value++;
    value++;
}

int main()
{
    int x = 1;
    incCopy(x);
    cout << x << endl;

    incRef(x);
    cout << x << endl;
    return 0;
}