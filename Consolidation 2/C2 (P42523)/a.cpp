#include <iostream>

using namespace std;

int gcd (int a, int b)
{   
    if (b == 0) return a;
    if (a < b) return gcd (b, a);
    return gcd (b, a%b);
}

int main ()
{
    int x, y;
    while (cin >> x >> y) 
    {
        cout << gcd(x, y) << endl;
    }
}

