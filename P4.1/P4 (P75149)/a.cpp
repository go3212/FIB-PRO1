#include <iostream>

using namespace std;

int main()
{
    char letter;
    bool found = false;

    while(cin >> letter && !found)
    {
        if (letter == 'a') found = true;
    }

    if (found) cout << "yes";
    else cout << "no";

    cout << endl;
}