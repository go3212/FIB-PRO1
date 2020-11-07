#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    int a2;
    cin >> a2;
    int b2;
    cin >> b2;

    int a3, b3;
    if(a2 > b || b2 < a){
        cout << "[]" << endl;
        return 0;
    }

    if(a > a2) a3 = a;
    else a3 = a2;

    if(b > b2) b3 = b2;
    else b3 = b;

    cout << "[" << a3 << "," << b3 << "]" << endl;

}