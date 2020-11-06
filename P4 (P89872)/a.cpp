#include <iostream>

using namespace std;
int main()
{
    string largest = "";
    string second_largest = "";

    string word;
    while (cin >> word)
    {
        if (word > second_largest && word < largest) second_largest = word;
        else if (word > largest)
        {
            second_largest = largest;
            largest = word;
        }
    }

    cout << second_largest << endl;
}