#include <iostream>
#include <string>

using namespace std;

void reverse_first_half (int& count)
{
    int pos = count;
    string word;
    while (cin >> word) reverse_first_half (++count);
    if (pos < count / 2) cout << word << endl;
}

int main ()
{
    int count = 0;
    reverse_first_half (count);
}