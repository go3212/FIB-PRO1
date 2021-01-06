#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct point 
{
    int i, j;
};

int displacement_sum (const point &a, const point &b, const vector<vector<int>> &map)
{
    point direction;
    if (b.i - a.i < 0) direction.i = -1;
    else if (b.i == a.i) direction.i = 0;
    else direction.i = 1;

    if (b.j - a.j < 0) direction.j = -1;
    else if (b.j == a.j) direction.j = 0;
    else direction.j = 1;

    int sum = 0;
    for (int j = a.j + direction.j; j != b.j + direction.j; j += direction.j) sum += map[a.i][j];
    for (int i = a.i + direction.i; i != b.i + direction.i; i += direction.i) sum += map[i][b.j];
        
    return sum;
}

int main ()
{
    int m, n; cin >> m >> n;
    vector<vector<int>> map(m, vector<int>(n));
    for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j) cin >> map[i][j];

    point a; cin >> a.i >> a.j;
    int result = map[a.i][a.j];
    point b; 
    while (cin >> b.i >> b.j)
    {
        result += displacement_sum(a, b, map);
        a = b;
    }

    cout << "suma = " << result << endl;

}