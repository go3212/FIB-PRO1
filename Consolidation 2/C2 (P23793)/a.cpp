#include <iostream>
#include <vector>

using namespace std;

int compara(int d1, int m1, int a1, int d2, int m2, int a2)
{
    // Revisamos primero el año, luego el mes y después el dia.
    // Devolvemos num neg -1 fecha1 < fecha2; 1 fecha1 > fecha2
    vector<int> fecha1(3);
    fecha1[2] = d1; fecha1[1] = m1; fecha1[0] = a1;
    vector<int> fecha2(3);
    fecha2[2] = d2; fecha2[1] = m2; fecha2[0] = a2;
    for (int i = 0; i < 3; ++i)
    {
        if (fecha1[i] < fecha2[i]) return -1;
        if (fecha1[i] > fecha2[i]) return 1;
    }

    return 0;
}

int main ()
{
    char clean_date;

    int d1;
    while (cin >> d1)
    {
        int m1, a1;
        cin >> clean_date >> m1 >> clean_date >> a1;
        int d2, m2, a2; 
        cin >> d2 >> clean_date >> m2 >> clean_date >> a2;
        int comp = compara(d1, m1, a1, d2, m2, a2);
        //cout << d1 << "/" << m1 << "/" << a1 << " " << d2 << "/" << m2 << "/" << a2 << endl;
        
        if (comp < 0) cout << "anterior";
        else if (comp > 0) cout << "posterior";
        else cout << "iguals";

        cout << endl;
    }
}