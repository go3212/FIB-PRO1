#include <iostream>

using namespace std;

int main()
{
    string word;
    cin >> word;

    int longest = 1;
    int counter = 1;

    string input;
    while (cin >> input)
    {
        if (word == input) ++counter;
        else counter = 0;

        if(counter > longest) longest = counter;
    }
    cout << longest << endl;
}