#include <iostream>

using namespace std;

int main ()
{
    cout.setf(ios::fixed);
    cout.precision(4);

    int a,b,k;

    while (cin >> a >> b >> k)
    {
        double sum_total = 0;
        for (int i = 0; i <= double((b-a)/k); ++i)
        {
            sum_total += 1/double(a + i*k);
        }

        cout << sum_total << endl;
    }
}