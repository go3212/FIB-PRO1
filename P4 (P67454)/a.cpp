#include <iostream>

using namespace std;

int main()
{
    char letter;
    int number_of_a = 0;

    while (cin >> letter && letter != '.')
    {  
        if (letter == 'a') number_of_a += 1;
    }

    cout << number_of_a <<  endl;
}