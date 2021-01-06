#include <iostream>
#include <vector>

using namespace std;

struct Position
{
    int i, j;
};

int main ()
{
    int m, n;
    while (cin >> m >> n)
    {
        vector<vector<int>> baldosas(m, vector<int>(n));
        for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j) cin >> baldosas[i][j];
        
        int suciedad = 0;
        
        Position last;
        last.j = n;
        if ((m - 1) % 2 == 0) last.i = m - 1;
        else last.i = 0;
        
        int i = 0;
        int j = 0;
        if (m != 1 and n != 1) while (i != last.i or j != last.j)
        {
            suciedad += baldosas[i][j];
            if(baldosas[i][j] == 0) cout << i << ' ' << j << endl;

            if (j%2 == 0) ++i;
            else --i;

            if (i == (m - 1) or i == 0) 
            {
                suciedad += baldosas[i][j];
                if(baldosas[i][j] == 0) cout << i << ' ' << j << endl;
                cout << "Total en columna " << j << ": " << suciedad << endl, ++j;
            }
        } 
        else 
        {
            if (baldosas[0][0] == 0) cout << 0 << ' ' << 0 << endl;
            cout << "Total en columna " << 0 << ": " << baldosas[0][0] << endl, ++j;
        }
        
    }
}
