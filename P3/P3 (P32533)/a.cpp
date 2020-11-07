#include <iostream>

using namespace std;

int main()
{
    int iterations;
    cin >> iterations;

    for (int i = 1; i <= iterations; ++i)
    {
        for (int k = 0; k < iterations; ++k)
        {
            if (k < (iterations - i)) cout << "+";
            else if (k > (iterations - i)) cout << "*";
            else cout << "/";
        }
        cout << endl;
    }    
}