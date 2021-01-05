#include <iostream>
#include <vector>
using namespace std;

struct set
{
    vector<double> val;
    vector<bool> included;
    set (int size)
    {
        val = vector<double>(size); included = vector<bool>(size, false);
    }
};

/* Método para numeros enteros
vector<double> difference(const vector<double> & V1, const vector<double> & V2)
{
    int V1_size = V1.size();
    int V2_size = V2.size();
    vector<double> result;
    if (V1_size > 0)
    {
        set v1(V1[V1_size - 1] + 1);
        
        // Guardamos los elementos de V1 en v1, por valor.
        for (int i = 0; i < V1_size; ++i) 
        {
            v1.val[V1[i]] = V1[i];
            v1.included[V1[i]] = true;
        }
        
        // Ahora comparamos los elementos de V2, de la misma manera.
        int v1size = v1.val.size();
        for (int i = 0; i < V2_size; ++i) 
        {
            if (v1.included[V2[i]] and V2[i] < v1size) v1.included[V2[i]] = false;
        }

        for (int i = 0; i < v1size; ++i) if (v1.included[i]) result.insert(result.end(), v1.val[i]);
    } else return V1;
    return result;
}*/

// Métodos para numeros double
vector<double> difference(const vector<double>&v1, const vector<double>&v2) {
    int s1 = v1.size();
    int s2 = v2.size();
    vector<double> aux(s1);
    int i, j, k;
    i = j = k = 0;
    while (i < s1 and j < s2) {
        if (v1[i] < v2[j]) {
            if (k == 0 or v1[i] != aux[k-1]) {
                aux[k] = v1[i];
                ++k;
            }
            ++i;
        }
        else if (v1[i] > v2[j]) ++j;
        else ++i;
    }
    while (i < s1) {
        if (k == 0 or aux[k-1] != v1[i]) {
            aux[k] = v1[i];
            ++k;
        }
        ++i;
    }
    vector<double> dif(k);
    for (i = 0; i < k; ++i) dif[i] = aux[i];
    return dif;
}

int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n1;
    while (cin >> n1) {
        vector<double> V1(n1);
        for (int i = 0; i < n1; ++i) cin >> V1[i];
        int n2;
        cin >> n2;
        vector<double> V2(n2);
        for (int i = 0; i < n2; ++i) cin >> V2[i];

        vector<double> res = difference(V1, V2);

        int n3 = res.size();
        cout << n3 << endl;
        for (int i = 0; i < n3; ++i) cout << " " << res[i];
        cout << endl << endl;

        for (int r = 0; r < 200; ++r) {
            vector<double> res2 = difference(V1, V2);
            if (res2 != res) cout << "Resultats diferents amb la mateixa entrada!" << endl;
        }
    }
}
