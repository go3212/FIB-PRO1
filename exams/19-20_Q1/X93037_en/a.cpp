#include <iostream>
#include <vector>
#include <string>

using namespace std;

// some additional functions may be necessary here


//pre:  v is ordered according to string length first and then 
//      by usual string order. All strings are different.   
//post: returns the position of s in v. 
//      If s  is not in v, returns -1 
int effi_search(const vector<string>& v, const string& s) 
{
    // Realizaré un algoritmo de busqueda dicotómica híbrido
    // Los tamaños van de menor a mayor
    int s_size = s.size();
    int left = 0, right = v.size() - 1;
    while (left <= right)
    {
        int m = (left + right)/2;
        int element_size = v[m].size();
        if (element_size > s_size) right = m - 1;
        else if (element_size < s_size) left = m + 1; 
        else if (v[m] > s) right = m - 1;
        else if (v[m] < s) left = m + 1;
        else if (v[m] == s) return m;
    }
    return -1;
    
    
}


int main() 
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    string s;
    while (cin >> s) 
        cout << effi_search(v, s) << endl;
}