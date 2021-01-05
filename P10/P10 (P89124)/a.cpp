#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int greatest (const vector<int> &vect)
{
    int size = vect.size();
    int greatest = vect[0];
    for (int i = 1; i < size; ++i) if (greatest < vect[i]) greatest = vect[i];
    return greatest;
}

void sieve_of_erastosthenes (vector<bool> &sieve, const int &size)
{
    // La implementacion de este algoritmo es sencilla:
    // Se itera desde i = 2 hasta i <= sqrt(size - 1)
    // Primero se escoge el primer número no marcado como número primo desde i = 2
    // Se tachan todos los múltiplos de el número en i (contenidos hasta (size - 1)/i).
    int n = size - 1;
    for (int i = 2; i*i <= n; ++i)
    {
        if (sieve[i] == false) 
        {
            int iter = n/i;
            for (int j = i; j <= iter; ++j) sieve[i*j] = true;
        }
    }
}

int main ()
{
    // Almacenamos todos los numeros a buscar.
    vector<int> numbers;
    int num; while (cin >> num) numbers.insert(numbers.end(), num);

    // Creamos la criba, los valores false representan si el numero es primo o no, contenidos en orden.
    if (numbers.size() > 0)
    {
        int size = greatest (numbers) + 1;
        vector<bool> sieve(size, false);

        sieve_of_erastosthenes (sieve, size);


        for (int i = 0; i < numbers.size(); ++i)
        {
            cout << numbers[i] << ' ';
            if (!(sieve[numbers[i]]) and numbers[i] != 0 and numbers[i] != 1) cout << "is prime";
            else cout << "is not prime";
            cout << endl;
        }
    }


}