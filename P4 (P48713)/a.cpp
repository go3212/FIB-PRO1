#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int iterations;
    cin >> iterations;

    for (int i = 1; i <= iterations; ++i)
    {
        int number;
        cin >> number;
        cout << number;

        bool is_prime = (number != 1 && number != 0);

        for (int k = 2; k <= sqrt(number) && is_prime; ++k)
        {
            if (number % k == 0) is_prime = false;
        }

        if(is_prime)  cout << " is prime" << endl;
        else cout << " is not prime" << endl;
    }
}