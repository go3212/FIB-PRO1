#include <iostream>
#include <vector>

using namespace std;

int letter_value (char c)
{
    if (c == 'a' or c == 'e') return 1;
    if (c == 'o' or c == 's') return 2;
    if (c == 'd' or c == 'i' or c == 'n' or c == 'r') return 3;
    if (c == 'c' or c == 'l' or c == 't' or c == 'u') return 4;
    if (c == 'm' or c == 'p') return 5;
    if (c == 'b' or c == 'f' or c == 'g' or c == 'h' or c == 'j' or 
    c == 'q' or c == 'v' or c == 'x' or c == 'y' or c == 'z') return 6;
    if (c == 'k' or c == 'w') return 7;
    return 0;
}

int main ()
{
    int text_value = 0;

    vector<int> frequency('z' - 'a' + 1, 0); 

    char c;
    while (cin >> c)
    {
        ++frequency[int(c - 'a')];
    }

    for (int i = 0; i < ('z' - 'a' + 1) ; ++i)
    {
        text_value += frequency[i]*(letter_value(char(i + 'a')));
    }

    cout << text_value << endl;
}