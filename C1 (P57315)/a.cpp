#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;

    for (int i = 0; i <= 2; ++i) // Como máximo dos iteraciones.
    { 
        int temp;
        if (B > C)
        {
            temp = C;
            C = B;
            B = temp;
        }
        if (A > B)
        {
            temp = B;
            B = A;
            A = temp;
        }
    }

    char letter = ' ';

    cin >> letter;
    if (letter == 'A') cout << A;
    else if (letter == 'B') cout << B;
    else cout << C;

    while (cin >> letter)
    {
        cout << " ";
        if (letter == 'A') cout << A;
        else if (letter == 'B') cout << B;
        else cout << C;
    }

    cout << endl;

}