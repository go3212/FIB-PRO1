#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string SIMPLE = "simple";

    double euros;
    cin >> euros;

    double interest;
    cin >> interest;

    int years;
    cin >> years;

    string data_type;
    cin >> data_type;

    if(data_type == SIMPLE)
        euros += euros*interest*0.01*years;
    else
        for (int i = 0; i < years; ++i)
        {
            euros += interest*0.01*euros;
        }

    cout.setf(ios::fixed);
    cout.precision(4);
    cout << euros << endl;
}