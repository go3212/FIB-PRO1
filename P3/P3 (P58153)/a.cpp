#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(10);

    int n,m;
    while (cin >> n >> m)
    {
        double har = 0;
        for(int i = m+1; i <= n; ++i)
        {
            har += 1/double(i);
        }
        
        cout << har << endl;
    }
}