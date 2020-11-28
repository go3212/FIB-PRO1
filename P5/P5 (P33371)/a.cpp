#include <iostream>

using namespace std;

char encrypt (char c, int k)
{
    //cout << k;
    // Primero miramos si se trata de un caracter, si no lo es
    // no lo encriptamos, excepto si es una _
    if (c >= 'a' and c <= 'z') c = ((c - 'a' + k) % 26) + 'A';
    else return (c == '_') ? ' ' : c;
    
    return c;
}

int main ()
{
    int k;
    while (cin >> k)
    {
        char c;
        while (cin >> c and c != '.') cout << encrypt (c, k);
        cout << endl;
    }
}