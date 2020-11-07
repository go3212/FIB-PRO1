#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number;
    while (cin >> number)
    {
        cout << "divisors of " << number << ":";

        for (int i = 1; i <= sqrt(number); ++i) if (number % i == 0) cout << " " << i;
        for (int i = sqrt(number); i > 0; --i) if ((number % i == 0) && i != (number/i)) cout << " " << number / i;
        
        cout << endl;
    }
}