#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    cout << "The number of digits of " << number << " is ";

    int count = 0;
    if(number == 0) count = 1;
    
    while(number != 0)
    {
        number /= 10;
        count += 1;
    }

    cout << count << "." << endl;

}