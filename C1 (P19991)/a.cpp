#include <iostream>

using namespace std;

int main()
{
    int columnas;
    cin >> columnas;

    int suma_total = 0;
    for (int i = 1; i <= columnas; ++i) //filas = columnas
    {
        for (int k = 1; k <= columnas; ++k)
        {
            char valor;
            cin >> valor;
            if (k == (columnas + 1) - i || k == i) suma_total += (valor - '0');
        }
    }

    cout << suma_total << endl;
}