#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main ()
{   
    string isbn;
    while (cin >> isbn)
    {
        int missing_value = 9;
        int isbn_numeric = 0;
        for (int i = 0; i <= 8; ++i)
        {
            char isbn_val = isbn[i];
            if (isbn_val != '?') isbn_numeric += int(isbn_val - '0')*(10-i);
            else missing_value = i;
        }
        if (missing_value != 9) isbn_numeric += ((isbn[9] == 'X') ? 10 : int(isbn[9] - '0'));

        int new_value = 0;
        while ((isbn_numeric + new_value*(10-missing_value)) % 11 != 0) ++new_value;

        if (new_value == 10) cout << 'X' << endl;
        else cout << new_value << endl;
/*
        if (new_value != 10) isbn[missing_value] = char(new_value + '0');
        else isbn[missing_value] = 'X';
        cout << isbn << endl;
*/

    }
}