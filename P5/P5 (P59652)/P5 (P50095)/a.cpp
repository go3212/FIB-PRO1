#include <iostream>

using namespace std;

bool is_prime (int number)
{
    bool is_prime = (number >= 2);
    for (int i = 2; i*i <= number and is_prime; ++i) if (number % i == 0) is_prime = false;

    return is_prime;
}

int main ()
{
    int number; 
    while (cin >> number && is_prime (number))
    {
        int i = number + 1;
        while (!is_prime (i)) ++i;
        cout << i << endl;
    }
}