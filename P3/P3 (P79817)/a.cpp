#include <iostream>

using namespace std;

int main()
{
    int base;
    while (cin >> base)
    {
        int exponente;
        cin >> exponente;

        int resultado = 1;

        for (int i = 1; i <= exponente; ++i)
        {
            resultado *= base;
        }

        cout << resultado << endl;
    }
}