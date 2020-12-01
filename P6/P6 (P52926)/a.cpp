#include <iostream>
#include <string>

using namespace std;

void print_reversed ()
{
    string word; cin >> word;
    if (word != "end") print_reversed (), cout << word << endl;
}

int main ()
{
    print_reversed ();
}