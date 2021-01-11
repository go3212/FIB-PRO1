#include <iostream>

using namespace std;

void converge(int n, int& k, int& far)
{
    // n es el número inicial, k pasos para llegar al final y far numero mas grande.
    if (far < n) far = n;
    if (n%2 == 0) converge (n/2, ++k, far); 
    else if (n != 1) converge (3*n + 1, ++k, far);
}

int main ()
{
    int m, p;
    cin >> m >> p;

    int far = 1;
    for (int i = 1; i <= m; ++i)
    {
        int k = 0;
        converge (i, k, far);
        if (k >= p) cout << i << endl;
    }
    cout << "The greatest reached number is " << far << "." << endl;
}