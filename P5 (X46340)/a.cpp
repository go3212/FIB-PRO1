#include <iostream>

using namespace std;

// En la funcion primero se debe evaluar el "tamaño" de cada valor.

int sum_min_max(int x, int y, int z)
{
    /* Podemos usar operadores condicionales.
    int minimum = (x < y) ? x : y;
    minimum = (minimum < z) ? minimum : z;

    int maximum = (x < y) ? y : x;
    maximum = (maximum < z) ? z : maximum;
    */

    // Pero para aprender es mas coherente hacerlo con if statements.
    int minimum, maximum;
    if (x < y) minimum = x; else minimum = y;
    if (minimum > z) minimum = z;

    if (x < y) maximum = y; else maximum = x;
    if (maximum < z) maximum = z;

    return (minimum + maximum);
}

int main ()
{
    int x, y, z;
    while(cin >> x >> y >> z) cout << sum_min_max(x,y,z) << endl;
}