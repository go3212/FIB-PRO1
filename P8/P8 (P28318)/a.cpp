#include <iostream>
#include <vector>
#include <string>

using namespace std;

void fill_matrix (const int& m, const int& n, vector<vector<int>> &matrix)
{
    for (int i = 0; i < m; ++i) 
    {
        for (int k = 0; k < n; ++k)
        {
            cin >> matrix[i][k]; 
        }
    }
}

void cout_row (const int& m, const vector<vector<int>>& matrix)
{
    for (int i = 0; i < matrix[0].size() - 1; ++i) cout << matrix[m - 1][i] << ' ';
    cout << matrix[m - 1][matrix[0].size() - 1];
}

void cout_column (const int& n, const vector<vector<int>>& matrix)
{
    for (int i = 0; i < matrix.size() - 1; ++i) cout << matrix[i][n - 1] << ' ';
    cout << matrix[matrix.size() - 1][n - 1];
}

int main ()
{
    // filas = m, columnas = n;
    int m, n; cin >> m >> n;
    vector<vector<int>> matrix (m, vector<int>(n));

    // Rellenamos la matrix con las entradas.
    fill_matrix (m, n, matrix);

    string question;
    while (cin >> question)
    {
        if (question == "row")
        {
            int row; cin >> row;
            cout << question << ' ' << row << ": ";
            cout_row (row, matrix);
            cout << endl;
        }
        else if (question == "column")
        {
            int column; cin >> column;
            cout << question << ' ' << column << ": ";
            cout_column (column, matrix);
            cout << endl;
        }
        else if (question == "element")
        {
            int e_m, e_n; cin >> e_m >> e_n;
            cout << question << ' ' << e_m << ' ' << e_n << ": ";
            cout << matrix[e_m - 1][e_n - 1] << endl;

        }
    }

}