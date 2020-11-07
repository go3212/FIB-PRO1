#include <iostream>
#include <string>

using namespace std;

int main()
{
    double total;
    int iteraciones = 0;

    double value;
    while (cin>>value)
    {
        total += value;
        iteraciones += 1;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << (total/iteraciones) << endl;
}