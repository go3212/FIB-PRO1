#include <iostream>

using namespace std;

int main()
{
    bool found = false;
    int position = 0;

    int number;
    while (cin >> number && !found)
    {
        position += 1;
        if (number % 2 == 0) found = true;
    }

    cout << position << endl;
}