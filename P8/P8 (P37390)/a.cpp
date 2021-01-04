#include <vector>
#include <iostream>
using namespace std;

typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& A, const Matrix& B)
{
    int m = A.size();
    int n = B[0].size();
    Matrix C (A.size(), vector<int>(n));

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int sum = 0;
            for (int k = 0; k < n; ++k)
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
    int n;
    while (cin >> n) {
        Matrix A(n, vector<int>(n));
        Matrix B(n, vector<int>(n));
        for (int i=0; i<n; ++i) 
        {
            for (int j=0; j<n; ++j) 
            {
                cin >> A[i][j];
            }   
        }
        for (int i=0; i<n; ++i) 
        {
            for (int j=0; j<n; ++j) 
            {
                cin >> B[i][j];
            }   
        }
        Matrix C = product(A,B);
        for (int i=0; i<n; ++i) 
        {
            for (int j=0; j<n; ++j) 
            {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}
