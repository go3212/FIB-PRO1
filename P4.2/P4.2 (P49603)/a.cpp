#include <iostream>

using namespace std;

int main ()
{
    bool found = false;                     //Variable de control, si encontramos una secuencia ascendente salimos del bucle.

    int final_line;

    int n;
    int line = 0;
    while(cin >> n)              //Recogemos el numero de iteraciones a iterar por cada "fila"
    {

        ++line;

        bool control = true;                //Si en el for hay alguna secuencia que no sea ascendente ya no se cumple

        string previous_word;
        if (n != 0)  cin >> previous_word;

        int i = 1;
        while (i < n and control)         //El rango es [1, n), n-1 iteraciones.
        {                                 // 4 palabras. n = 4: [0] 1 2 3 [4]

            string word; cin >> word;

            if (previous_word > word) control = false;

            previous_word = word;

            ++i;
        }

        if (!control) for (int k = i; k < n; ++k) cin >> previous_word;
        else
        {   
            final_line = line;
            found = true;
        }
    }
    if (found) cout << "The last line in increasing order is " << final_line << "." << endl;
    else cout << "There is no line in increasing order." << endl;

}


/*
int main() {
	string prev, next;
	int n, c = 1, ultim = 0;
	while (cin >> n) {
		bool creixent = true;
		if (n > 0) cin >> prev;
		for (int i = 1; i < n; ++i) {
			cin >> next;
			if (next < prev) creixent = false;
			prev = next;
		}
		if (creixent) ultim = c;
		++c;
	}
	if (ultim != 0) cout << "The last line in increasing order is " << ultim << "." << endl;
	else cout << "There is no line in increasing order." << endl;
}
*/