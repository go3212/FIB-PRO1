#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comp (const int& a, const int& b)
{
    return a > b;
}

int main ()
{
    int elements;
    while (cin >> elements)
    {
        if (elements > 0)
        {
            vector<int> numbers(elements);
            for (int i = 0; i < elements; ++i) cin >> numbers[i];

            sort (numbers.begin(), numbers.end(), comp);

            for (int i = 0; i < elements - 1; ++i) cout << numbers[i] << ' ';
            cout << numbers[elements - 1];
        }
        cout << endl;
    }   
}