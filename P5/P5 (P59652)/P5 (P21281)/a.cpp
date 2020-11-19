#include <iostream>

using namespace std;


void factor(int n, int& f, int& q)
{
    // El mas pequeño es 2^0 = fact(2), pero debemos considerar el mismo numero
    q = 0, f = 1;
    int q_fact = 0, f_fact = 2; 
    //Sabemos que el orden de los factores va del mas pequeño al mas grande
    while (f_fact*f_fact <= n) if (n % f_fact == 0) 
    {
        ++q_fact;       
        if (q_fact > q) q = q_fact, f = f_fact;

        n = n/f_fact;
    } else q_fact = 0, ++f_fact;

    if (q == 0) f = n, q = 1;
    else if ((f_fact == n) && (q_fact + 1) > q) ++q, f = n;
}


int main() {
    int n;
    while (cin >> n) {
        int f = -1, q = 1000;
        factor(n, f, q);
        cout << f << ' ' << q << endl;
    }
}
