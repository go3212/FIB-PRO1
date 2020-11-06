#include <iostream>

using namespace std;

int main()
{   
    char input;
    int number = 0;

    while (cin >> input)
    {
        if (input == 'a') number += 1;
    }

    cout << number << endl;
}