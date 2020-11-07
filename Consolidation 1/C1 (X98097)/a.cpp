#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int number; 
    cin >> number;

    int sum_odd = 0;
    int sum_even = 0;

    int digits = 0;
    while (number != 0)
    {
        digits += 1;

        if(digits % 2 != 0) sum_odd += number % 10;
        else sum_even += number % 10;

        number /= 10;
    }

    cout << sum_odd << " " << sum_even << endl;

    int multiples, num;
    if (sum_even > sum_odd)
    {
        multiples = sum_even;
        num = sum_odd;
    }
    else {
        num = sum_even;
        multiples = sum_odd;
    }

    bool found = false;
    for (int i = 0; i <= sqrt(multiples) && !found; ++i)
    {
        if (i*num == multiples)
        {
            multiples = i;
            found = true;
        }
    }

    if (found)
    {
        cout << num*multiples << " = " << multiples << " * " << num << endl;
    }
    else if (sum_even == 0 || sum_odd == 0)
    {
        cout << "0 = 0 * 1" << endl;
    }
    else cout << "nothing" << endl;

}