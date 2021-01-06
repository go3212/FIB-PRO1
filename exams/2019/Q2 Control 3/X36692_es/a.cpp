#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int vector_sum (const vector<int> &vect, int i, int j)
{
    int sum = 0;
    for (int k = i; k < j; ++k) sum += vect[k];
    return sum;
}

int main ()
{
    int n; 
    while (cin >> n)
    {
        vector<int> numbers(n);
        for (int i = 0; i < n; ++i) cin >> numbers[i];
        
        int result_i = -1;
        int result_j = -1;
        bool found = false;
        int i_sum = 0;
        int total_sum = vector_sum(numbers, 0, n);
        for (int i = 0; i < n; ++i)
        {
            int j_sum = total_sum - i_sum;
            i_sum += numbers[i];
            for (int j = i; j < n; ++j)
            {
                if (i <= result_i and j >= result_j and i_sum == j_sum and found)
                {
                    result_i = i;
                    result_j = j;
                } else if (!found and i_sum == j_sum)
                {
                    result_i = i;
                    result_j = j;
                    found = true;
                }
                j_sum -= numbers[j];
            }
        }

        if (result_j != -1) cout << result_i << ' ' << result_j << endl;
        else cout << "no" << endl;

    }
}