#include <iostream>
#include <vector>

using namespace std;


void insert(vector<double>& v)
{
    // Podemos aproximar la solucion de la siguiente manera:
    // 1. Crear index = size - 1;
    // 2. Mientras no se encuentre un valor v[i - 1] > v[i] o i > 0 intercambiar v[i - 1] y v[i]

    /*
    bool found = false;
    for (int i = v.size() - 1; i > 0 and !found; --i)
    {
        if (v[i - 1] > v[i]) 
        {
            int k = v[i];
            v[i] = v[i - 1];
            v[i - 1] = k;
        } else found = true;
    }
    */

	int tam = v.size();
	for (int i = 1; i < tam; ++i)  {
		double x = v[i];
		int j = i;
		while (j > 0 && x < v[j - 1]) {
			v[j] = v[j - 1];
			--j;
		}
		v[j] = x;
	}

} 


int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i=0; i<n; ++i) {
            cin >> V[i];
        }
        insert(V);
        for (int i=0; i<n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
}
