#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_out (int index0, int index1, vector<int> vect)
{
    for (int i = index0; i < index1; ++i) cout << vect[i] << ' ';
    cout << vect[index1];
}

bool comp (const int& a, const int& b)
{
    if (a % 2 == 0) return a < b;
    else return a > b;
    return  a > b;
}

int main ()
{
    int first_num;
    while (cin >> first_num)
    {
        vector<int> numbers; 
        numbers.insert(numbers.end(), first_num);
        int n; cin >> n;
        while (n != 0)
        {
            numbers.insert(numbers.end(), n);
            cin >> n;
        } 

        sort (numbers.begin(), numbers.end(), &comp);

        int even_ending = 0;
        while (numbers[even_ending] % 2 != 0) ++even_ending;
        
        if (even_ending != numbers.size()) print_out (even_ending, numbers.size() - 1, numbers);
        cout << endl;
        if (even_ending != 0) print_out (0, even_ending - 1, numbers);
        cout << endl;
        
    }
}