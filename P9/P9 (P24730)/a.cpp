#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Teacher
{
    string name;
    int carrots, sweets;
};

bool comp (const Teacher &a, const Teacher &b)
{
    // Mejor a peor, mas sweets a menos sweets
    // Si hay empate, el que tenga mas carrots
    // Si vuelve a haber empate, el que tenga el nombre mas corto
    // Si sigue habiendo empate, el que sea menor alfabeticamente
    if (a.sweets > b.sweets) return true;
    else if (a.sweets < b.sweets) return false;
    else    // Primer empate
    {
        if (a.carrots > b.carrots) return true;
        else if (a.carrots < b.carrots) return false;
        else    // Segundo empate 
        {
            if (a.name.size() < b.name.size()) return true;
            if (a.name.size() > b.name.size()) return false;
            else    // Tercer empate
            {
                if (a.name < b.name) return true;
                return false;
            }
        }
    }
}

int main ()
{
    int cases; cin >> cases; 
    while (cases != 0)
    {
        int n; cin >> n;

        vector<Teacher> teachers(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> teachers[i].name;
            cin >> teachers[i].sweets;
            cin >> teachers[i].carrots;
        }

        sort(teachers.begin(), teachers.end(), comp);

        for (int i = 0; i < n; ++i) 
            cout << teachers[i].name << endl;
        cout << endl;
        --cases;
    }
}