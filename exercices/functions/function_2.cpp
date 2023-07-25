#include <iostream>
using namespace std;

// Functions prototype
void log(int number, bool newLine);

int main()
{
    log(3, false);
    log(4, false);
    log(5, true);
    return 0;
}

void log(int number, bool newLine)
{
    cout << "Number" << number;
    newLine ? cout << endl : cout << " ";
}