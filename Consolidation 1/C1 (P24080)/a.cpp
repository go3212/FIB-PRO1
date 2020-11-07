#include <iostream>

using namespace std;

int main()
{
    int size;
    bool first = true;

    while(cin >> size)
    {
        if (!first) cout << endl;
        first = false;

        for (int i = 1; i <= size; ++i)
        {
            for (int k = 1; k <= size; ++k) cout << size;
            cout << endl;
        }
    }
}