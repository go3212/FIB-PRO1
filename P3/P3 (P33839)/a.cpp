#include <iostream>

using namespace std;

int main()
{
    int number;

    while(cin >> number)
    {
        cout << "The sum of the digits of " << number << " is ";

        int output = 0;
        while(number != 0)
        {
            output += number%10;
            number /= 10;
        }

        cout << output << "." << endl;
    }
}