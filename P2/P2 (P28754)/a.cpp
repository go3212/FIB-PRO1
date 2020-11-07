#include <iostream>

using namespace std;

int main()
{
    int natural;
    cin >> natural;
    
    if (natural == 0) cout << 0;
    while(natural != 0)
    {
        cout << natural % 2;
        natural /= 2;        
    }

    cout << endl;
    
}