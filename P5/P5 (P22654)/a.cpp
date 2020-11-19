#include <iostream>
using namespace std;


void decompose(int n, int& h, int& m, int& s)
{
    h = n/3600;
    m = (n - (h*3600))/60;
    s = (n - (h*3600) - (m*60));
}


int main() {
    int n, h, m, s;
    while (cin >> n) {
        decompose(n, h, m, s);
        cout << h << " " << m << " " << s << endl;
    }
}
