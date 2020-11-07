#include <iostream>
using namespace std;

// Los años de "salto" son aquellos que tienen 366 dias.
// Son multiplos de cuatros y no acaban con dos ceros.
// Los años que acaban don dos ceros, tal que al quitarlos son divisibles por cuatro.

bool is_leap_year(int year)
{
    return (year % 100 == 0) ? ((year / 100) % 4 == 0 ? true : false) : (year % 4 == 0 ? true : false);
}


int main() 
{
    int a;
    while (cin >> a) cout << (is_leap_year(a) ? "true" : "false") << endl;
}
