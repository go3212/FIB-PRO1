#include <iostream>

using namespace std;

int main()
{
    int rows, columns;
    cin >> rows >> columns;
    
    int coins = 0;
    for (int k = 0; k < rows; ++k)
    {
        string row;
        cin >> row;
        for(int i = k%2; i < columns; i += 2)
        {
            coins += row[i] - '0';
        }
    }
    cout << coins << endl;
}