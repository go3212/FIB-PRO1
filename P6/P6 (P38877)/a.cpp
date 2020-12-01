#include <iostream>
#include <string>

using namespace std;

void print_reversed_numbered (int& number)
{
    string word;
    while (cin >> word) 
    {
        print_reversed_numbered (number);
        if (number != 0) cout << word << endl, --number;
    }

}

int main ()
{
    int number; cin >> number;
    print_reversed_numbered (number);
}