#include <iostream>

using namespace std;

int main()
{
    int n; 
    cin >> n;
    cout << n;

    int sum_odd = 0;
    int pos = 0;
    while(n != 0)
    {
        if(pos%2 == 0) sum_odd += n%10;
        n /= 10;
        pos += 1;
    }

    if (sum_odd %2 == 0) cout << " IS COOL";
    else cout << " IS NOT COOL";

    cout << endl;
}