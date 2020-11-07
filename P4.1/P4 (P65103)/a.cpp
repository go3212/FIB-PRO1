#include <iostream>

using namespace std;

int main() 
{
    int number, position, counter = 1, found_number;
    bool found = false;
    cin >> position;

    while (cin >> number && !found)
    {
        if (counter == position) 
        {
            found = true;
            found_number = number;
        }

        counter++;
    }

    if (found) cout << "At the position " << position << " there is a(n) " << found_number << "." << endl;
    else cout << "Incorrect position." << endl;
}