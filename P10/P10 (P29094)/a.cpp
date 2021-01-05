#include <iostream>
#include <vector>

using namespace std;

int position_maximum(const vector<double>& v, int m)
{
    
    int index = 0;
    for (int i = 1; i <= m; ++i)
    {
        if (v[index] < v[i]) index = i;
    }
    return index;
}


int main() {
  int m, n;
  while (cin >> m >> n) {
    vector<double> V(n);
    for (int i = 0; i < n; ++i) cin >> V[i];
    cout << position_maximum(V, m) << endl;
  }
}
