#include <iostream>

using namespace std;

int main()
{
    int columns, rows;
    while(cin >> rows >> columns)
    {
        int number = 9;
        for (int k = 0; k < rows; ++k)
        {
            for (int i = 1; i <= columns; ++i)
            {   
                cout << number;
                if (number == 0) number = 9;
                else number -= 1;
            }
            cout << endl;
        }        
        cout << endl;
    }
}