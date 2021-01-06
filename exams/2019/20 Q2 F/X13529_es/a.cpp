#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct result
{
    int val;
    int first;
    int first_double;
    int last;
};

struct index 
{
    int val;
    int pos;
};

bool sort_by_index_and_value (const index &a, const index &b)
{
    if (a.val == b.val) return a.pos < b.pos;
    return a.val < b.val;
}

int main ()
{
    int n; 
    while (cin >> n)
    {
        vector<index> sequence(n);
        for (int i = 0; i < n; ++i) cin >> sequence[i].val, sequence[i].pos = i;

        sort (sequence.begin(), sequence.end(), sort_by_index_and_value);
        
        bool found = false;
        result number; 
        number.first = n;
        number.last = n;
        for (int i = 1; i < n; ++i)
        {
            if ((sequence[i - 1].val == sequence[i].val) and 
               (sequence[i - 1].pos < number.first))
            {
                found = true;
                number.first = sequence[i - 1].pos;
                number.val = sequence[i - 1].val;
            }
            if (sequence[i].val == number.val) number.last = sequence[i].pos;
        }

        if (found) cout << number.val << ' ' << number.last << endl;
        else cout << "NO" << endl;
        
    }
}