#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double n;      //n >= 2
    cin >> n;

    double variancia = 0;
    double suma_numeros = 0;

    double numero;
    while (cin >> numero)   //Calcula la parte izquierda de la expresion del sumatorio
    {
        variancia += (1/(n-1))*(pow(numero, 2));
        suma_numeros += numero;
    }

    variancia -= (1/(n*(n-1)))*pow(suma_numeros, 2);

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << variancia << endl; 
}