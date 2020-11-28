#include <iostream>
using namespace std;


int reduction_of_digits (int n)
{
    int suma = 0;
    while (n != 0) suma += n%10, n /= 10;
    if (suma/10 != 0) return reduction_of_digits(suma);
    return suma;
}


int main () 
{
    int n;
    while (cin >> n) cout << reduction_of_digits(n) << endl;
}