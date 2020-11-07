#include <iostream>

using namespace std;

int main()
{
    int position;
    cin >> position;

    int number;
    for (int i = position; i != 0; --i)
    {
        cin >> number;
    }

    cout << "At the position " << position << " there is a(n) " << number << "." << endl;

}