#include <iostream>
#include <cmath>
using namespace std;


bool is_palindromic(int n)
{
    bool palindromic = true;

    int number = n;
    int lenght = 0;
    while (n != 0)
    {
        ++lenght;
        n /= 10;
    }

    for (int i = 1; i <= lenght; ++i)
    {
        if ((number/int(pow(10, (lenght - i))))%10 != (number/int(pow(10, i - 1)))%10) palindromic = false;
    }

    return palindromic;
}


int main() {
    int n;
    while (cin >> n) cout << (is_palindromic(n) ? "true" : "false") << endl;
}
