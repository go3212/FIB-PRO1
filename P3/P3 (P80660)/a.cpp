#include <iostream>

using namespace std;

int main()
{
    int number;
    while(cin >> number)
    {
        int steps = 0;
        while(number != 1)
        {
            steps += 1;
            if(number%2 == 0) number /= 2;
            else number = (number * 3) + 1;
        }
        cout << steps << endl;
    }
}