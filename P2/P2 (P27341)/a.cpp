#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int output;

    int valor_a, valor_b;
    while (cin >> valor_a)
    {
        cin >> valor_b;
        output = 0;
        for(int i = valor_a; i <= valor_b; i++)
        {
            output += pow(i, 3);
        }
        cout << "suma dels cubs entre " << valor_a << " i " << valor_b << ": " << output << endl;
    }
}