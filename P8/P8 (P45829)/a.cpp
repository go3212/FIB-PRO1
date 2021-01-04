#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    int m, n;
    while (cin >> m)
    {
        cin >> n;

        m += 2, n += 2;
        
        // Creamos el vector que contiene los fields, e introducimos "referencia"
        vector<vector<int>> fields(m, vector<int>(n, 0));
        for (int i = 1; i < (m - 1); ++i) for (int j = 1; j < (n - 1); ++j) cin >> fields[i][j];

        // Procedemos a calcular "escaneando" los puntos de contacto
        int value = 0;

        //      Sabiendo los "fields" iniciales, computamos la continuidad
        for (int i = 1; i < (m - 1); ++i)
        {
            for (int j = 1; j < (n - 1); ++j)
            {
                if ((fields[i - 1][j] == 0) and (fields[i][j] != 0) and (fields[i][j + 1] == 0)) ++value;
            }
        }
        cout << value << endl;
    }
}