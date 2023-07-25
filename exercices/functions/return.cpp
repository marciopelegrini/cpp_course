#include <iostream>
using namespace std;

void log(string text)
{
    if (text.empty()){
        return;
    }
    cout << "Text: " << text << endl;
}

int main()
{
   log("");     // not show
   log("Teste");// show

    return 0;
}