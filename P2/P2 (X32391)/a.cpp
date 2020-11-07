#include <iostream>

using namespace std;

int main()
{
    int weekly_expenses, euros, weeks;
    cin >> weekly_expenses;
    cin >> euros;
    cin >> weeks;

    int positive_euros = 0;

    for(int i = 1; i <= weeks; ++i)
    {
        int savings;
        cin >> savings;
        
        euros += - weekly_expenses + savings;
        
        if (euros > 0) positive_euros += 1;
    }
    cout << positive_euros << endl;
}