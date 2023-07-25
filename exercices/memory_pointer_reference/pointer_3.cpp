#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 47, 33, 72, 13, 88 };
    cout << &arr[0] << endl;

    int* p1 = &arr[0];
    cout << *p1 << endl;

    p1++;
    cout << *p1 << endl;

    p1++;
    cout << *p1 << endl;

    return 0;
}