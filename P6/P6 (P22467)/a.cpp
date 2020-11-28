#include <iostream>

using namespace std;

bool is_prime (int number)
{
    bool is_prime_number = (number != 0 and number != 1);
    for (int i = 2; i*i <= number and is_prime_number; ++i) if (number % i == 0) is_prime_number = false;
    return is_prime_number;
}

bool is_perfect_prime(int number)
{
    bool is_prime_number = is_prime (number);
    if (number >= 11 and is_prime_number)
    {
        // Primero tenemos que ir digito a digito para ver si son primos, nuestro caso de "salida" es n <= 1, el cual no es primo.
        int digit_sum = 0;
        while (number != 0 and is_prime_number) digit_sum += number % 10, number /= 10;
        is_prime_number = is_perfect_prime (digit_sum);
    }
    return is_prime_number;
}


int main () 
{
    int n;
    while (cin >> n) cout << (is_perfect_prime(n) ? "true" : "false") << endl;
}
