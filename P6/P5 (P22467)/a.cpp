#include <iostream>
using namespace std;

int is_prime (int n)
{
    int i = 2;
    if (n == 0 or n == 1) return false;
    while (i*i <= n) if (n%i == 0) return false, ++i;
    return true;
}

bool is_perfect_prime(int n)
{

}


int main() 
{
    int n;
    while (cin >> n) cout << (is_perfect_prime(n) ? "true" : "false") << endl;
}
