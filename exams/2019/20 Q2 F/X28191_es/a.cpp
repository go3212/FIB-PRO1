#include <iostream>

using namespace std;

int time_lapse (int time_1, int time_2)
{
    if (time_1 == time_2) return 60;
    return (60 - time_1 + time_2)%60;
}

int main ()
{
    int k; cin >> k;

    int time = 0;
    bool found = false;
    int a; cin >> a;
    int b; cin >> b;
    int index = 1;
    while (b != -1 and !found)
    {   
        time += time_lapse (a, b);
        if (time > k) found = true;
        ++index;
        a = b;
        cin >> b;
    }

    if (found) cout << index << endl;
    else cout << 0 << endl;
}