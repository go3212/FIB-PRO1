#include <iostream>
using namespace std;


bool is_multiple_3(int n)
{
    bool multiple_3 = false;
    int sum = 0;
    while (n != 0) sum += n%10, n /= 10;

    for (int i = 1; i <= sum && !multiple_3; ++i)
    {
        if (3*i == sum) multiple_3 = true;
    }

    return multiple_3;
}


int main() {
    int n;
    while (cin >> n) {
        cout << (is_multiple_3(n) ? "true" : "false") << endl;
    }
}
