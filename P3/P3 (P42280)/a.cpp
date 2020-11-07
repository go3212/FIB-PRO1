#include <iostream>

using namespace std;

int main()
{
    int rows, columns;
    cin >> rows >> columns;
    
    int coins = 0;
    for (int k = 1; k <= rows; ++k)
    {   
        string row;
        cin >> row;
        for(int i = 0; i < columns; ++i)
        {
            coins += row[i] - '0';
        }
    }
    cout << coins << endl;
}