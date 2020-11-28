#include <iostream>
using namespace std;


int fatten (int x)
{
    if (x <= 9) return x;
    int fat_number = fatten (x/10);
    if (fat_number % 10 >= x % 10) return fat_number*10 + (fat_number % 10);
    else return fat_number*10 + (x % 10);
}


int main () 
{
    int x;
    while (cin >> x) cout << fatten(x) << endl;
}
