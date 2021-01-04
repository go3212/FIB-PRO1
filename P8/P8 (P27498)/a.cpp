#include <vector>
#include <iostream>
using namespace std;

typedef vector< vector<int> > Matrix;

void swap (int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

void transpose(Matrix& M)
{
    int n = M.size();
    for (int i = 0; i < n - 1; ++i)
    {
        for (int k = i + 1; k < n; ++k)
        {
            swap(M[i][k], M[k][i]);
        }
    }
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
        transpose(M);
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cout << M[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}
