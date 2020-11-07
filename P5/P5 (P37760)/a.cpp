#include <iostream>
#include <cmath>

#define PI 3.141592653

using namespace std;

int main ()
{
    cout.precision(6);
    cout.setf(ios::fixed);

    double angle;
    while (cin >> angle) cout << sin (angle*(M_PI/180)) << " " << cos (angle*(M_PI/180)) << endl;
}