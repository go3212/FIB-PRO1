#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Asignatura {
    int id;
    double creditos;
    double nota;
};

struct Alumno {
    int dni;
    vector <Asignatura> asigs;
};

typedef vector <Alumno> Alumnos;

// Pre: --
// Post: retorna el número de alumnos en alus que superan el factor alfa

//  Un alumno supera el factor alfa si la media de las notas que ha obtenido 
//  en cada asignatura matriculada ponderada por sus créditos es superior o igual a 5
//      EJ: Por ejemplo, si un alumno ha matriculado dos asignaturas: la primera tiene identificador 345, 
//      6 créditos y ha obtenido un 10; la segunda tiene identificador 201, 9 créditos y ha obtenido un 5, 
//      su media ponderada será (6*10 + 9*5) / (6 + 9) = 7.
int supera_alfa(const Alumnos& alus) 
{
    int superados = 0;
    int size = alus.size();
    for (int i = 0; i < size; ++i)
    {
        int asignaturas = alus[i].asigs.size();
        double creditos_x_nota = 0;
        double nota_total = 0;
        for (int j = 0; j < asignaturas; ++j)
        {
            creditos_x_nota += alus[i].asigs[j].creditos*alus[i].asigs[j].nota;
            nota_total += alus[i].asigs[j].creditos;
        }
        if (creditos_x_nota/nota_total >= 5) ++superados;
    }

    return superados;
}

// Pre: en la entrada hay la información de m asignaturas
// Post: retorna un vector de Asignatura con la información de la entrada,
//          manteniendo el orden de aparición.
vector<Asignatura> lee_asignaturas(int m) 
{
   vector<Asignatura> asignaturas(m);
   for (int i = 0; i < m; ++i)
   {
       Asignatura asign;
       cin >> asign.id;
       cin >> asign.creditos;
       cin >> asign.nota;
       
       asignaturas.insert(asignaturas.end(), asign);
   }
   
   return asignaturas;
}

int main () 
{
    int n; cin >> n;
    
    Alumnos a(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i].dni;
        int m; cin >> m;
        if(m > 0) a[i].asigs = lee_asignaturas(m);
    }

    cout << supera_alfa(a) << endl;
}