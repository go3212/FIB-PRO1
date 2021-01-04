#include <vector>
#include <iostream>
using namespace std;


typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& A, const Matrix& B)
{
    // La dimension de la nueva matriz es mxn -> a(m* x n); b(m x n*)
    int m = A.size();
    int n = B[0].size(); 
    int s = A[0].size(); // s es el número de columnas de A (o b), donde se efectua el desplazamiento al sumar

    Matrix C(m, vector<int>(n));
    for (int i = 0; i < m; ++i)         // Desplazamiento por filas
    {
        for (int j = 0; j < n; ++j)     // Desplazamiento por columnas
        {
            int sum = 0;
            for (int k = 0; k < s; ++k) // Desplazamiento 
            {
                sum += A[i][k]*B[k][j];
            }    
            C[i][j] = sum;
        }
    }
    return C;
}


int main ()
{
    int p, q, r;
    while (cin >> p >> q >> r) {
        Matrix A(p,vector<int>(q));
        Matrix B(q,vector<int>(r));
        for (int i=0; i<p; ++i) {
            for (int j=0; j<q; ++j) {
                cin >> A[i][j];
        }   }
        for (int i=0; i<q; ++i) {
            for (int j=0; j<r; ++j) {
                cin >> B[i][j];
        }   }
        Matrix C = product(A,B);
        for (int i=0; i<p; ++i) {
            for (int j=0; j<r; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}
