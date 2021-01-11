#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* Aproximación recursiva 1 -> Bad alloc 
bool search_for_odd_pair (int size, vector<int> numbers, int& position)
{
    if (position == 0) return false;
    bool is_odd = (numbers[position] + numbers[size]) % 2 != 0;
    if (is_odd) return true;
    if (size == 0) --position, size = position;
    return search_for_odd_pair (size - 1, numbers, position);
}
*/

/* Aproximación recursiva 2
void search_for_odd_pair (bool& found, vector<int>& numbers, int position)
{
    int size = numbers.size() - 1;
    if (size != 0 and !found)
    {
        found = (numbers[size] + numbers[position]) % 2 != 0;
        if (position == 0) numbers.pop_back(), position = size;
        search_for_odd_pair (found, numbers, --position);
    }
}
*/

bool increasing (int a, int b)
{
    return a < b;
}

int main ()
{
    int nums;
    while (cin >> nums)
    {   
        if (nums > 0)
        {
            vector<int> numbers(nums);
            for (int i = 0; i < nums; ++i) cin >> numbers[i];
            /* Recursiva 1
            int position = nums - 1;
            cout << ((search_for_odd_pair (nums - 1, numbers, position)) ? "yes" : "no") << endl;
            */
            /* Recursiva 2
            bool found = false;
            search_for_odd_pair (found, numbers, nums - 2);
            if (found) cout << "yes" << endl;
            else cout << "no" << endl;
            */
            /* Iterativa 1 (final-principio)
            bool found = false;
            int i = nums - 1;
            while (!found and i >= 1)
            {   
                int k = i - 1;
                while (!found and k >= 0)
                {
                    found = (numbers[i] + numbers[k]) % 2 != 0;
                    --k;
                }
                --i;
            }
            if (found) cout << "yes" << endl;
            else cout << "no" << endl;
            */
            /* Iterativa 2 (principio-final)
            bool found = false;
            int i = 0;
            while (!found and i < (nums - 1))
            {   
                int k = i + 1;
                while (!found and k <= (nums - 1))
                {
                    found = (numbers[i] + numbers[k]) % 2 != 0;
                    ++k;
                }
                ++i;
            }
            if (found) cout << "yes" << endl;
            else cout << "no" << endl;
            */
            // Iterativa, descartando numeros
            vector<int> odd_nums;
            bool exists_even = false, exists_odd = false;
            int i = 0;
            while (i < nums and !(exists_even and exists_odd))
            {
                if (numbers[i] % 2 != 0) odd_nums.insert(odd_nums.end(), numbers[i]), exists_odd = true;
                else exists_even = true;
                
                ++i;
            }    

            bool found = exists_even and exists_odd;

            if (found) cout << "yes" << endl;
            else cout << "no" << endl;

        } else cout << "no" << endl;
    }
}