#include <iostream>
#include <vector>
#include <string>

using namespace std;

string get_string ()
{
    string result;
    char c; cin >> c;
    while (c != '.')
    {
        if (c <= 'Z' and c >= 'A') result.insert(result.end(), c);
        cin >> c;
    }
    result.insert(result.end(), '.');
    return result;
}

int main ()
{
    int n; cin >> n;
    vector<bool> result (n, false);
    for (int i = 0; i < n; ++i)
    {
        string one = get_string();
        string two = get_string();
        int size = one.length();
        vector<int> data(24, 0);
        if (size == two.length()) 
        {
            for (int j = 0; j < size - 1; ++j)
            {
                data[one[j] - 'A'] += 1;
                data[two[j] - 'A'] -= 1;
            }
            result[i] = true;
            for (int j = 0; j < 24 and result[i]; ++j) if (data[j] != 0) result[i] = false;
        }
    }
    for (int i = 0; i < n; ++i) cout << ((result[i]) ? "YES" : "NO") << endl;
}