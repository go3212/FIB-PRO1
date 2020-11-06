#include <iostream>

using namespace std;

int main()
{
    int iterations;
    cin >> iterations;

    for (int i = 1; i <= iterations; ++i)
    {
        for (int k = 1; k <= i; ++k)
        {
            cout << "*";
        }
        cout << endl;
    }
}