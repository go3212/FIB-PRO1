#include <iostream>
#include <cmath>

using namespace std;

bool is_perfect(int x)
{
    // Aqui almacenaremos el numero.
    int number = 1; // El uno es divisor de todos los numeros.
    for (int i = 2; i <= sqrt(x); ++i) if (x % i == 0) number += i + x/i;
    
    bool is_perfect = ((x != 1) && x == number);
    return is_perfect;
}

int main () 
{
    int x;
    while (cin >> x) cout << (is_perfect(x) ? "true" : "false") << endl;
}