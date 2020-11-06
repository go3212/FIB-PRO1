#include <iostream>
#include <cmath>

using namespace std;

int power (int a)
{
    return a*a;
}

double square_root (int a)
{
    return sqrt(a);
}

int main ()
{
    cout.setf(ios::fixed);
    cout.precision(6);
    
    int a;
    while (cin >> a) cout << power(a) << " " << square_root(a) << endl;
}