#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

void retrieve_matrix(const int &m, const int &n, vector<vector<char>> &matrix)
{
    for (int i = 0; i < m; ++i)         // Iterar por filas
    {
        for (int j = 0; j < n; ++j)     // Iterar por columnas
        {
            cin >> matrix[i][j];
        }
    }         
}

bool match (const vector<string> &words, const char &letter, vector<int> &casualties)
{
    bool found = false;
    for (int i = 0; i < words.size(); ++i)
    {
        if (letter == words[i][0]) found = true, casualties.insert(casualties.end(), i);
    }
    return found;
}

bool word_fits (vector<int> &matrix_size, const string &word, const int &v1, const int &v2)
{
    return (word.size()*v1 <= matrix_size[0]) and (word.size()*v2 <= matrix_size[1]);
}

bool exists (const int &m, const int &n, const vector<vector<char>> &matrix, const vector<string> &words, const int& v1, const int& v2)
{   
    vector<int> matrix_size = { matrix[0].size(), matrix.size() };
    int words_size = words.size();

    vector<bool> found(words_size, false);

    for (int i = 0; i < words_size; ++i)
    {
        string word = words[i];
        int word_size = word.size();
        if (word_fits(matrix_size, word, v1, v2))
        {
            int k = 0;
            int x = 0, y = 0;
            while (k < word_size and !found[i])
            {
                if (matrix[m + x][n + y] != word[k]) found[i] = false;

                ++k; x += v1; y += v2;
            }
        } 
        else 
        {
            found[i] = false;
        }
    }
}


int main ()
{
    int x;
    while (cin >> x)
    {
        int m, n; cin >> m >> n;
        vector<string> words(x);
        vector<vector<char>> map(m, vector<char>(n));
        
        for (int i = 0; i < x; ++i) cin >> words[i];

        retrieve_matrix (m, n, map);



        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                char letter = map[i][j];
                vector<int> found_num;
                if (match(words, letter, found_num))
                {
                    vector<string> words_to_search(found_num.size());
                    for (int i = 0; i < found_num.size(); ++i) words_to_search[i] = words[found_num[i]];

                    bool horizontal = exists (i, j, map, words_to_search, 0, 1);
                    if (horizontal) 
                    {
                        for (int i = 0; i < words_to_search.size(); ++i) cout << words_to_search[i] << endl;
                    }

                        

                    

                    //for (int i = 0; i < words_to_search.size(); ++i) cout << words_to_search[i];

                }
            }
        }
    }
}