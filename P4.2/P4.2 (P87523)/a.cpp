#include <iostream>

using namespace std;

int main ()
{
    // Lo hare con un switch.
    int validator = 1;         // Si llega a 5 se ha detectado 'hello'

    bool found = false;

    char c0, c1, c2, c3, c4;
    cin >> c0 >> c1 >> c2 >> c3;

    char character;
    while (cin >> character and character != '.' and !found)
    {
        c4 = character;

        if (c0 == 'h' && c1 == 'e'&& c2 == 'l' && c3 == 'l' && c4 == 'o') found = true;

        c0 = c1;
        c1 = c2;
        c2 = c3;
        c3 = c4;
    }
    if (found) cout << "hello" << endl;
    else cout << "bye" << endl;

}