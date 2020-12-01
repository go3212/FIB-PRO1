#include <iostream>

using namespace std;

void print_bars (int number)
{
    if (number != 1)
    {
        print_bars (number - 1);
        for (int i = 1; i <= number; ++i) cout << '*';
        cout << endl;
        print_bars (number - 1);
    } else cout << '*' << endl;
}

int main ()
{
    int number; cin >> number;
    int count;
    print_bars (number);
}