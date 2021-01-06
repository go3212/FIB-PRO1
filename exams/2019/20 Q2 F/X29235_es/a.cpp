#include <iostream>
#include <vector>
using namespace std;


typedef vector<int> Fila;
typedef vector<Fila> Tablero;

struct Position
{
    int i, j;
};

int abs_val (const int &a)
{
    if (a < 0) return -1*a;
    return a;
}

bool proper_move (const Position &a, const Position &b)
{
    // Si el movimiento del caballo es correcto, implica que o bien: (Pos a - Pos b)
    // a = +-2 y b = +- 1 o que a = +- 1 y b = +- 2
    Position variation;
    variation.i = abs_val(b.i - a.i);
    variation.j = abs_val(b.j - a.j);

    if (variation.i == 2 and variation.j == 1 or variation.i == 1 and variation.j == 2) return true;
    return false;

}

// Pre: tab es configuracion del tablero cuando el caballo ha hecho k-1 saltos y
//      k >= 1 indica que se ha de simular el k-esimo salto.
//
// Post: tab es la configuracion  del tablero cuando se ha hecho el k-esimo salto
//       testigo es true si tab ha cambiado y false en caso contrario
void move_update(Tablero &tab, int &k, bool &testigo) 
{
    int m = tab.size();
    int n = tab[0].size();

    const Tablero copia = tab;
    
    vector<Position> posiciones;
    vector<Position> not_visited;
    for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j)
    {
        if (copia[i][j] == k) posiciones.insert(posiciones.end(), {i, j});
        if (copia[i][j] == 0) not_visited.insert(not_visited.end(), {i, j});
    }

    // Miramos si desde las posiciones no visitadas se puede ir a alguna de las posiciones.
    int pos_size = posiciones.size();
    int not_visited_size = not_visited.size();
    for (int i = 0; i < pos_size; ++i)
    {
        for (int j = 0; j < not_visited_size; ++j)
        {
            if (proper_move(posiciones[i], not_visited[j]))
            {
                tab[not_visited[j].i][not_visited[j].j] = (k + 1);
            }
        }
    }

    bool cambios = false;
    for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j)
    {
        if (copia[i][j] != tab[i][j]) cambios = true;
    }
    testigo = cambios;
}


void escribir_tablero(const Tablero& tab) {
    int m = tab.size();
    int n = tab[0].size();
    for (int i = 0; i < m; ++i) {
        cout << tab[i][0];
        for (int j = 1; j < n; ++j) cout << ' ' << tab[i][j];
        cout << endl;
    }
}


//inicializa el tablero tab a cero
void set_zero(Tablero& tab) {
    int m = tab.size();
    int n = tab[0].size();
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            tab[i][j] = 0;
}


int main() {
    int m;
    while (cin >> m) 
    {
        int n; cin >> n;
        Tablero tab(m, Fila(n));
        set_zero(tab);

        int i, j; cin >> i >> j;
        tab[i][j] = 1;
        bool testigo = true;
        int k = 1;
        while (testigo) 
        {
            move_update(tab, k, testigo);
            ++k;
        }
        escribir_tablero(tab);
        cout << endl;
    }
}