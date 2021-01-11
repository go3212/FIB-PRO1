#include <iostream>

using namespace std;

double recursive_factorial (int number)
{
    // el factorial de un numero es: 1*2 ... (n-1)(n)
    if (number == 0 or number == 1) return 1;

    double n_factorial = 1;
    for (int i = 2; i <= number; ++i)
    {
        n_factorial *= i;
    }

    return n_factorial;
}

double calculate_e (int number)
{
    double result = 0;
    for (int i = 0; i < number; ++i)
    {
        result += double(1)/double(recursive_factorial(i));
    }
    return result;
}

int main ()
{
    cout.precision(10);
    cout.setf(ios::fixed);

    int number;
    while (cin >> number)
    {
        cout << "With " << number << " term(s) we get " << calculate_e(number) << "."<< endl;
    }
}