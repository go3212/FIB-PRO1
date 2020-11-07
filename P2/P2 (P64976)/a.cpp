#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    if (number == 0) return 0;
    for (int i = 1; i <= number; ++i)
    {
        cout << number << " x " << i << " = " << number*i << endl;
    }
}