#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct point
{
    int i, j;
};

struct direction
{
    int i, j;
};

int absolute (const int &a)
{
    if (a < 0) return a*-1;
    else return a;
}

vector<int> get_diag (const vector<vector<int>> &matrix, const point &p, const direction &v)
{
    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> diagonal;
    int i = p.i*absolute(v.i);
    int j = p.j*absolute(v.j);
    while (((i >= 0) and (i < m)) and ((j >= 0) and (j < n)))
    {
        diagonal.insert(diagonal.end(), matrix[i][j]);

        i += -1*v.i;
        j += v.j;
    }

    return diagonal;
}

int main ()
{
    int m, n;
    while (cin >> m >> n)
    {
        // Inicializamos la matriz para luego operar con ella.
        vector<vector<int>> matrix(m, vector<int>(n));
        for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j) cin >> matrix[i][j];

        // Recogemos los valores del punto y computamos la matriz que contiene las diagonales
        point p; cin >> p.i >> p.j;
        vector<vector<int>> diags = {   get_diag (matrix, p, {1, 1}), 
                                        get_diag (matrix, p, {-1,-1}),
                                        get_diag (matrix, p, {1, -1}),
                                        get_diag (matrix, p, {-1, 1})    };
        // Las matrices se recogen en el orden apropiado, veamos is son todas ascendentes.
        bool ascending = true;
        int i = 0;
        while (i < 4 and ascending)
        {
            int size = diags[i].size();
            if (size > 1) for (int j = 1; j < size and ascending; ++j)
            {
                if (diags[i][j - 1] >= diags[i][j]) ascending = false;
            }
            ++i;
        }

        cout << ((ascending) ? "yes" : "no") << endl;

    }
}