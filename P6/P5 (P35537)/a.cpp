#include <iostream>
using namespace std;


bool is_increasing(int n)
{
    // Por simpleza, miramos si el numero es decreciente, si es decreciente -> es creciente.
    if (n/10 == 0) return true;
    else if (n%10 >= (n/10)%10) return is_increasing (n/10);
    return false;
}


int main() 
{
    int n;
    while (cin >> n) cout << (is_increasing(n) ? "true" : "false") << endl;
}
