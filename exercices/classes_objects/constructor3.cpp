#include <iostream>
using namespace std;

class Actor {
public:
    string name;
    string email;

    Actor(string name, string email)
    {
        // (*this).name = name;
        // (*this).email = email;

        this->name = name;
        this->email = email;
    }
    string actorShow()
    {
        return this->name + " [" + this->email + "]";
    }
};

int main()
{
    Actor actor1 = Actor("steve", "carrel@office.com");

    cout << actor1.actorShow() << endl;

    return 0;
}