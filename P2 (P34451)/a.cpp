#include <iostream>

using namespace std;

int main()
{
    int modulo;
    cin >> modulo;

    int n_multiplos = 0;

    int valor;
    while (cin >> valor)
    {
        if(valor%modulo == 0) n_multiplos += 1;
    }

    cout << n_multiplos << endl;
}