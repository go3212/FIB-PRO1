#include <iostream>

using namespace std;

int main()
{
    int base;
    while(cin >> base)
    {
        int numero;
        cin >> numero;

        int base_numero = 0;
        while(numero != 0)
        {
            numero /= base;
            base_numero += 1;
        }
        cout << base_numero << endl;
    }
}