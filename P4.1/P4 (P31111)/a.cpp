#include <iostream>

using namespace std;

int main()
{
    int index = 0;

    bool except = false;
    char input;
    while(cin >> input && !except)
    {
        if (input == '(') ++index;
        else if (input == ')')
        {
            --index;
            if (index < 0) except = true;
        }
    }

    if (index == 0 && !except) cout << "yes" << endl;
    else cout << "no" << endl;

}