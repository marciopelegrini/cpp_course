#include <iostream>
using namespace std;

int main()
{
    int radius;
    const double PI = 3.1415;
    double area;

    cout << "Enter the radius: ";
    cin >> radius;

    area = PI * radius * radius;

    cout << "The area is: " << area << endl;

    return 0;
}