#include <iostream>
using namespace std;

int max2(int a, int b)
{
    if (a < b) return b;
    else return a;
}

int max4(int a, int b, int c, int d)
{
    // Se puede realizar con operaciones condicionales facilmente, no obstante lo realizare de una manera mas
    // "sencilla". Creare otra funcion llamada max2.

    // Comparamos los valores mas grandes de dos numeros y de otros dos, el mas grande del resultado es el valor maximo
    // total
    return (max2(max2(a,b), max2(c,d)));
}


int main() 
{
    int a, b, c, d;
    while (cin >> a >> b >> c >> d) cout << max4(a, b, c, d) << endl;
}
