#include <iostream>

using namespace std;

int main()
{
    int iteraciones; //numero harmonico (funcion) iteraciones
    cin >> iteraciones;

    double h_num = 0;

    for (int i = 1; i <= iteraciones; ++i)
    {
        h_num += (1/double(i));
    }

    cout.setf(ios::fixed);
    cout.precision(4);
    cout << h_num << endl;

}