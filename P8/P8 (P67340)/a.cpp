#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

struct match
{
    int i, j;
    bool found;
};

struct position
{
    int i, j;
};

struct vect
{
    int i, j;
};

struct bishop
{
    int i, j;
    vector<position> threats;
};

/*
bool no_Xes (const bishop &A, const bishop &B, const vector<vector<char>> &map, const vect &v)
{
    int m = map.size();
    int n = map[0].size();

    int i = A.i + v.i; int j = A.j + v.j;
    if (v.i == -1 and v.j == -1) while ((i > B.i) and (j > B.j))
    {
        if (map[i][j] == 'X') return false;

        i += v.i;
        j += v.j;
    }
    if (v.i == 1 and v.j == 1) while ((i < B.i) and (j < B.j))
    {
        if (map[i][j] == 'X') return false;

        i += v.i;
        j += v.j;
    }
    if (v.i == -1 and v.j == 1) while ((i > B.i) and (j < B.j))
    {
        if (map[i][j] == 'X') return false;

        i += v.i;
        j += v.j;
    }
    if (v.i == 1 and v.j == -1) while ((i < B.i) and (j > B.j))
    {
        if (map[i][j] == 'X') return false;

        i += v.i;
        j += v.j;
    }

    
    return true;
} 
*/

/*
bool in_diagonal (const bishop &A, const bishop &B, const vector<vector<char>> &map)
{
    vect direction = {B.i - A.i, B.j - A.j};

    if ((direction.i > 0) and (direction.i == direction.j)) return no_Xes (A, B, map, {1,1});
    if (direction.i*-1 == direction.j) return no_Xes (A, B, map, {-1,1});
    if (direction.i == direction.j*-1) return no_Xes (A, B, map, {1,-1});
    if ((direction.i < 0) and (direction.i*-1 == direction.j*-1)) return no_Xes (A, B, map, {-1,-1});
    else return false;

    if (direction.i < 0 and direction.j < 0) direction.i = -1, direction.j = -1;
    else if (direction.i > 0 and direction.j > 0) direction.i = +1, direction.j = +1;
    else if (direction.i < 0 and direction.j > 0) direction.i = -1, direction.j = +1;
    else if (direction.i > 0 and direction.j < 0) direction.i = +1, direction.j = -1;
    else return false;

    //cout << direction.i << ' ' << direction.j << endl;
    int i = A.i + direction.i; int j = A.j + direction.j;

    int m = map.size();
    int n = map[0].size();
    while ((i >= 0 and i < m) and (j >= 0 and j < n))
    {
        if (i == B.i and j == B.j) return true;
        if (map[i][j] == 'X') return false;

        i += direction.i;
        j += direction.j;
    }
    return false;
}
*/

typedef vector <bool>Fila;
typedef vector <Fila>Tauler;

void find_threats_direction(const Tauler& tauler, int f1, int c1, int dx, int dy) {
	int n = tauler.size();
	int m = tauler[0].size();

	int i = f1+dx;
	int j = c1+dy;

	bool trobat = false;
	while (not trobat and i < n and i >= 0 and j < m and j >= 0) {
		if (tauler[i][j]) {
			cout << '(' << f1+1 << ',' << c1+1 << ")<->(" << i+1 << ',' << j+1 << ')' << endl;
			trobat = true;
		}

		i += dx;
		j += dy;
	}
}

void find_threats(const Tauler& tauler, int f1, int c1) {
	find_threats_direction(tauler, f1, c1, 1, 1);  // cap a baix a la dreta
	find_threats_direction(tauler, f1, c1, 1, -1);  // cap a baix a l'esquerra
	find_threats_direction(tauler, f1, c1, -1, 1);  // cap a dalt a la dreta
	find_threats_direction(tauler, f1, c1, -1, -1);  // cap a dalt a l'esquerra
}

int main() {
	int n, m;
	cin >> n >> m;

	Tauler tauler = Tauler(n, Fila(m));

	char c;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> c;
			tauler[i][j] = (c == 'X');
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (tauler[i][j]) {
				find_threats(tauler, i, j);
			}
		}
	}
}

    /*
int main ()
{
    // Cargamos el tablero en un vector y almacenamos las posiciones de los bishops en otro
    // simultaneamente
    int m, n; cin >> m >> n;
    vector<vector<char>> chessboard (m, vector<char>(n));
    vector<bishop> bishops;
    for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j) 
    {
        cin >> chessboard[i][j];
        if (chessboard[i][j] == 'X')
        {
            bishop bish; bish.i = i; bish.j = j;
            bishops.insert(bishops.end(), bish);
        }
    }

    // Ahora computamos todas las relaciones entre los bishops, la relacion es simetrica pero no
    // transitiva. Entonces, solo es necesario computar las amenazas en todos los bishops de manera
    // decreciente, pues si (a, b) <-> (a1, b1), seguro que (a1, b1) <-> (a, b) y que
    // (a2, b2) !<-> (a, b)
    int number_bishops =  bishops.size();
    for (int i = 0; i < number_bishops; ++i)
    {
        for (int j = i + 1; j < number_bishops; ++j)
        {
            if (in_diagonal (bishops[i], bishops[j], chessboard))
            {
                cout << '(' << bishops[i].i + 1 << ',' << bishops[i].j + 1<< ')';
                cout << "<->";
                cout << '(' << bishops[j].i + 1 << ',' << bishops[j].j + 1 << ')' << endl; 
                cout << '(' << bishops[j].i + 1 << ',' << bishops[j].j + 1 << ')';
                cout << "<->";
                cout << '(' << bishops[i].i + 1 << ',' << bishops[i].j + 1 << ')' << endl; 
                //bishops[i].threats.insert(bishops[i].threats.end(), {bishops[j].i, bishops[j].j});
                //bishops[j].threats.insert(bishops[j].threats.end(), {bishops[i].i, bishops[i].j});
            }
        }
    }
    
    for (int i = 0; i < number_bishops; ++i)
    {
        int bishop_threats = bishops[i].threats.size();
        for (int j = 0; j < bishop_threats; ++j)
        {
            cout << '(' << bishops[i].i + 1 << ',' << bishops[i].j + 1<< ')';
            cout << "<->";
            cout << '(' << bishops[i].threats[j].i + 1<< ',' << bishops[i].threats[j].j + 1 << ')' << endl; 
        }
    }


}
    */