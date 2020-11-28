#include <iostream>
using namespace std;

void decimal_to (int number, int base)
{
    if (number/base != 0) decimal_to (number / base, base);
    int digit = (number % base);
    if (digit > 9) cout << char ('A' + digit - 10);
    else cout << digit;
}

int main ()
{
    int decimal_number;
    while (cin >> decimal_number)
    {
        cout << decimal_number << " = ";
        decimal_to (decimal_number, 2); 
        cout << ", ";
        decimal_to (decimal_number, 8); 
        cout << ", " ;
        decimal_to (decimal_number, 16);
        cout << endl;
    }    
}