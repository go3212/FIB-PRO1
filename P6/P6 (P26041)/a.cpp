#include <iostream>
#include <string>

using namespace std;

void print_reverse ()
{
    string word;
    while (cin >> word) print_reverse (), cout << word << endl;
}

int main ()
{
    print_reverse ();
}