#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef vector<vector<int> > Matrix;

struct matrix
{
    //vector<vector<int>> data;
    int smallest_digit;
    int greatest_digit;
};

struct difference
{
    int max_value;
    int index;
};

void min_max(const Matrix& mat, int& minimum, int& maximum);

int main ()
{
    vector<matrix> matrices;

    // Primero almacenaré todos los elementos en un vector de matrices
    int m, n;
    while (cin >> m >> n)
    {
        // Creamos la matriz y almacenamos los datos por cin, en el proceso de creación
        // guardamos el dígito mas pequeño.
        // cout << m << ' ' << n << endl;
        matrix mtrx;
        int x; cin >> x; 
        mtrx.greatest_digit = x;
        mtrx.smallest_digit = x;

        //vector<vector<int>> matrix_(m, vector<int>(n));
        //matrix_[0][0] = x;
        for (int j = 1; j < n; ++j)
        {
            cin >> x;
            if (x < mtrx.smallest_digit) mtrx.smallest_digit = x;
            if (x > mtrx.greatest_digit) mtrx.greatest_digit = x;
            //matrix_[0][j];
        }

        for (int i = 1; i < m; ++i) for (int j = 0; j < n; ++j)
        {
            cin >> x;
            if (x < mtrx.smallest_digit) mtrx.smallest_digit = x;
            if (x > mtrx.greatest_digit) mtrx.greatest_digit = x;
            //matrix_[i][j] = x;
        }

        //mtrx.data = matrix_;
        matrices.insert(matrices.end(), mtrx);
    }
    // Ya teniendo todas las matrices con sus respectivos valores maximos y minimos, los restamos y los
    // almacenamos en otro vector, en el orden que se presentan.
    difference result;
    result.max_value = matrices[0].greatest_digit - matrices[0].smallest_digit;
    result.index = 0;

    for (int i = 1; i < matrices.size(); ++i)
    {
        int value = matrices[i].greatest_digit - matrices[i].smallest_digit;
        if (result.max_value < value) result.max_value = value, result.index = i;
    }

    // Imprimimos
    cout << "la diferencia maxima es " << result.max_value << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << ++result.index << endl;
}