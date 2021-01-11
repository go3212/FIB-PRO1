#include <iostream>
#include <string>

using namespace std;

void update_length (int length, int& shrt, int& med, int& lng)
{
    if (length != 0)
    {
        if (length < 5) ++shrt;
        else if (length > 9) ++lng;
        else ++med;
    }
}

int main ()
{
    // Se considera palabra corta < 5 letras; media < 5-9 letras; larga > 9 letras
    int shrt = 0, med = 0, lng = 0;
    int length = 0;
    char character; cin >> character;
    while (character != '.')
    {   
        
        if (character != '-')
        {
            ++length;
        }
        else 
        {
            update_length (length, shrt, med, lng);
            length = 0;
        }
        cin >> character;
    }
    update_length (length, shrt, med, lng);
    cout << shrt << ',' << med << ',' << lng << endl;
}