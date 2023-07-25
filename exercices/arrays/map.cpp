#include <iostream>
#include <vector>

using namespace std;

vector<int> map(vector<int> v, int (*fn)(int))
{
    vector<int> newVector;
    for (auto el : v) {
        newVector.push_back((*fn)(el));
    }
    return newVector;
}

int main()
{
    auto square = [](int x) { return x * x; };

    vector<int> nums = { 2, 5, 8, 23, 56 };
    vector<int> squares = map(nums, square);

    for (auto n : nums)
        cout << n << "\t";
    cout << "\n";
    for (auto sq : squares)
        cout << sq << "\t";

    return 0;
}