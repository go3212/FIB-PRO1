#include <iostream>

using namespace std;

int main()
{
    int base;
    cin >> base;

    int number;
    while(cin >> number)
    {   
        cout << number << ": ";

        int digit_sum = 0;
        while(number != 0)
        {
            digit_sum += number%base;
            number /= base;
        }

        cout << digit_sum << endl;
    }
}