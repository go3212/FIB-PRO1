#include <iostream>
#include <vector>

using namespace std;

void insertion_sort(vector<double>& v)
{
    // El algoritmo insertion sort ascendente consiste en hacer lo siguiente:
    // 1. Ver si numero v[i] > v[i - 1]
    // 2. Si lo es, avanzar ++i, si no lo es, buscar el primer elemento que cumple v[i] > v[i - 1] e insertar
    //    v[i] en v[j]
    // 3. Volver al paso 1 hasta que i < v.size()

    int size = v.size();
    for (int i = 1; i < size; ++i)
    {
        double key = v[i];
        int j = i - 1;
        while (j >= 0 and v[j] > key)
        {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = key;
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
        insertion_sort(V);
        for (int i=0; i<n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
}
