#include <iostream>
#include <vector>

using namespace std;

bool magic_square(const vector<vector<int>>& M)
{
    int n = M.size();
    if (n < 1) return false;
    bool is_magic_square = true;
    vector<bool> map_values((n*n), false);
    int magic_value = 0;
    //  Recogemos la primera fila y guardamos el valor en magic_value.
    for (int i = 0; i < n; ++i) magic_value += M[i][0];
    //  Ahora si n > 1, calculamos el resto de parametros.
    int i = 0, j = 0;
    int diag1 = 0, diag2 = 0;
    while ((i < n and j < n) and is_magic_square)
    {
        int row = 0, column = 0;
        for (int k = 0; k < n; ++k) 
        {
            row += M[i][k];
            column += M[k][j];
            if (M[i][k] > n*n or M[i][k] < 1) return false;
            else map_values[M[i][k] - 1] = true;
        }
        //cout << row << ' ' << column << endl;
        diag1 += M[i][j];
        diag2 += M[i][n - j - 1];
        if (row != magic_value or column != magic_value) is_magic_square = false;
        ++i, ++j;
    }
    //cout << diag1 << ' ' << diag2 << endl;
    if (diag1 != magic_value or diag2 != magic_value) is_magic_square = false;

    for (int k = 0; k < n*n; ++k) if (map_values[k] == false) return false;
    return is_magic_square;
}

int main ()
{
    int n;
    while (cin >> n) {
        vector< vector<int> > M(n, vector<int>(n));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> M[i][j];
        }   }
        cout << magic_square(M) << endl;
}   }