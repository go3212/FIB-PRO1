#include <iostream>

using namespace std;

int main ()
{
    bool found = false;                     //Variable de control, si encontramos una secuencia ascendente salimos del bucle.

    int line = 0;

    int n; 
    while(cin >> n and !found)              //Recogemos el numero de iteraciones a iterar por cada "fila"
    {
        ++line;

        bool control = true;                //Si en el for hay alguna secuencia que no sea ascendente ya no se cumple

        string previous_word; cin >> previous_word;
        int i = 1;
        while (i < n and control)         //El rango es [1, n), n-1 iteraciones.
        {
            string word; cin >> word;

            if (previous_word > word) control = false;

            previous_word = word;

            ++i;
        }

        if (!control) for (int k = i; k < n; ++k) cin >> previous_word;
        else found = true;

    }   
    if (found) cout << "The first line in increasing order is " << line << "." << endl;
    else cout << "There is no line in increasing order." << endl;

    
}