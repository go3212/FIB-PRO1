#include <iostream>
using namespace std;


bool c_frac(int n1, int d1, int n2, int d2)
{
    double frac1 = (double(n1))/(double(d1));
    double frac2 = (double(n2))/(double(d2));
    
    return (frac1 < frac2);
}


int main() {
    int n1, d1, n2, d2;
    while (cin >> n1 >>  d1 >> n2 >> d2) {
        if (c_frac(n1,d1,n2,d2)) cout << "yes" << endl;
        else cout << "no" << endl;
    }   
}
