#include <iostream>

using namespace std;

int main()
{
    int decimal;
    cin >> decimal;
    
    if (decimal == 0) cout << 0;
    while(decimal != 0)
    {
        int remainder = decimal % 16;
        decimal /= 16;

        if (remainder > 9)
        {
            remainder -= 9;
            cout << char(64 + remainder);
        } else cout << remainder;
    }
    cout << endl;
}