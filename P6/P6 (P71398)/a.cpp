#include <iostream>
using namespace std;


void digit_maxim_i_minim(int n, int& maxim, int& minim)
{
    int digit = n % 10;
    if (n/10 != 0) 
    {
        digit_maxim_i_minim (n/10, maxim, minim);
        if (digit > maxim) maxim = digit;
        if (digit < minim) minim = digit;
    }
    else maxim = n % 10, minim = n % 10;

}


int main() {
    int x;
    while (cin >> x) 
    {
      int a, b;
      digit_maxim_i_minim(x, a, b);
      cout << x << ' ' << a << ' ' << b << endl;
    }
}

