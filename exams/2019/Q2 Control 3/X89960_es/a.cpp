#include <iostream>
#include <vector>
#include <algorithm>

struct Tren {
    string id_tren;
    string destino;
    string hora;
};

struct InfDest {
    string destino;
    string primer_id;
    int freq;
};


//pre: m > 0  es el numero de destinos y v es el vector de trenes
//     con la info de cada <Tren>. El vector v no es vacio y esta 
//     ordenado por (1) criterio principal: destino
//     (2) criterio secundario: hora    (3) último criterio:
//     identificador de tren.
//     
//
//post: construye un vector de  <InfDest>  con la info recogida
//      de cada destino, su frecuencia y su primer tren
vector<InfDest> crea_v_inf_dest(const vector<Tren>& v, int m) 
      

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<Tren> v_tren = lee_info_trenes(n);
    sort(v_tren.begin(), v_tren.end(), cmp_tren);
    vector<InfDest> v_inf_dest = crea_v_inf_dest(v_tren, m);
    sort(v_inf_dest.begin(), v_inf_dest.end(), cmp_inf_dest);
    escribir_resultados(v_inf_dest);
}