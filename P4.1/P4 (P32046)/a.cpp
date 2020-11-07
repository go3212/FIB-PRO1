#include <iostream>

using namespace std;

int main()
{
    int cifras;
    cin >> cifras;
    cout << "nombres que acaben igual que " << cifras << ":" << endl;
    cifras %= 1000;

    int total = 0;
    int numero;
    while(cin >> numero)
    {
        if(numero%1000 == cifras)
        {
            total += 1;
            cout << numero << endl;
        }     
    }

    cout << "total: " << total << endl;



}