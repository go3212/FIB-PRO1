#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct word
{
    int size;
    string str;
};

struct position
{
    int i, j;
    int size;
    bool horizontal;
    bool found;
};

vector<position> match (const word &str, const vector<vector<char>> &map)
{
    int m = map.size();
    int n = map[0].size();

    vector<position> result;
    // Buscamos si está en horizontal.
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            bool found = true; int k = 0;
            if ((j + str.size) <= n) while (k < str.size)
            {
                if (map[i][j + k] != str.str[k]) found = false;
                ++k;
            } else found = false;

            if (found) 
            {
                position res; 
                res.i = i; res.j = j; 
                res.size = str.size; res.horizontal = true;
                result.insert(result.end(), res);
            }
        }
    }

    // Buscamos si está en vertical
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            bool found = true; int k = 0;
            if ((i + str.size) <= m) while (k < str.size)
            {
                if (map[i + k][j] != str.str[k]) found = false;
                ++k;
            } else found = false;

            if (found) 
            {
                position res; 
                res.i = i; res.j = j; 
                res.size = str.size; res.horizontal = false;
                result.insert(result.end(), res);
            }
        }
    }
    return result;
}

int get_value (const position &pos, const vector<vector<int>> &map)
{
    int value = 0;
    // Si es horizontal, se procedera de manera diferente a si es vertical
    if (pos.horizontal)
    {
        for (int i = pos.j; i < (pos.size + pos.j); ++i)
        {
            value += map[pos.i][i];
        }
    } 
    else
    {
        for (int i = pos.i; i < (pos.size + pos.i); ++i)
        {
            value += map[i][pos.j];
        }
    }

    return value;
}

int main ()
{
    // Matrices de valores
    int m, n;
    while (cin >> m)
    {
        cin >> n;

        vector<vector<char>> char_map (m, vector<char>(n));
        vector<vector<int>> value_map (m, vector<int>(n));

        for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j) cin >> char_map[i][j];
        for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j) cin >> value_map[i][j];

        // Valores a comparar
        int v; cin >> v;
        vector<word> str_map (v);
        for (int i = 0; i < str_map.size(); ++i) 
            cin >> str_map[i].str, str_map[i].size = str_map[i].str.size();

        // Procedimiento de comparación
        for (int i = 0; i < v; ++i)                                // Para cada una de las palabras...
        {
            vector<position> positions = match (str_map[i], char_map);  // Buscar las palabras en el mapa
            if (positions.size() > 0)
            {
                vector<int> values(positions.size());
                for (int j = 0; j < positions.size(); ++j)
                {
                    values[j] = get_value(positions[j], value_map);
                }

                int max_val = values[0];
                for (int j = 1; j < values.size(); ++j)
                {
                    if (max_val < values[j]) max_val = values[j];
                }
                
                cout << max_val << endl;
            } else cout << "no" << endl;
        }
    }
}