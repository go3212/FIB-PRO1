#include <iostream>

using namespace std;

int main()
{
    string input;
    while (cin >> input && input != "beginning" && input != "end");
    if (input != "beginning" || input == "end") cout << "wrong sequence" << endl;
    else 
    {
        int counter = 0;

        while(cin >> input && input != "end")
        {
            ++counter;
        }

        if (input == "end") cout << counter << endl;
        else cout << "wrong sequence" << endl;
    }

}