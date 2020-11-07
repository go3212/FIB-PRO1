#include <iostream>

using namespace std;

int main()
{
    int hh;
    cin >> hh;

    int mm;
    cin >> mm; 

    int ss;
    cin >> ss;

    int t_ss = (hh*3600) + (mm*60) + ss + 1;

    hh = (t_ss/3600);
    mm = (t_ss-(hh*3600))/60;
    ss = (t_ss - hh*3600 - mm*60);

    cout << (hh%24)/10 << (hh%24)%10 << ":" << (mm)/10 << mm%10 << ":" << (ss)/10 << ss%10 << endl;
}