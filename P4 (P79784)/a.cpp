#include <iostream>

using namespace std;

int main()
{
    int x = 0; // south += 1
    int y = 0;  //east += 1

    char direction;

    while(cin >> direction)
    {
        if (direction == 's') y += 1;
        else if (direction == 'n') y -= 1;
        else if (direction == 'e') x += 1;
        else /*(direction == 'w')*/ x -= 1;
    }

    cout << "(" << x << ", " << y << ")" << endl;
}