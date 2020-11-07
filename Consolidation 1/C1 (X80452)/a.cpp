#include <iostream>

using namespace std;


/*
int main ()
{
    int numero;
    while (cin >> numero)
    {
        bool init = false;
        int q = numero/4, q_min = 0, p_min = 0;
        int minimo = numero; // Falso?
        while (q >= 0)
        {
            if ((7*(numero - 4*q))/7 + 4*q  == numero)
            {
                int p = (numero - 4*q)/7;
                if (p+q < minimo && 7*p + 4*q == numero)
                {
                    minimo = p + q;
                    q_min = q;
                    p_min = p;
                }
            }

            --q;

        }
        cout << p_min << " " << q_min << endl;
    }
}
*/

int main() {
	int n;
	while (cin >> n) 
    {
		int p = n / 7, q = 0, pmin = 0, qmin = 0, min = n;
		while (p >= 0) 
        {
			if ((7*p + 4*(n - 7*p)/4) == n) 
            {
				q = (n - 7*p)/4;
				if (min > (p+q) && n == 7*p + 4*q) 
                {
					min = p+q;
					pmin = p;
					qmin = q;
				}
			}
			--p;
		}
		cout << pmin << " " << qmin << endl;
	}
}