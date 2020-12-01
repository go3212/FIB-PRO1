#include <iostream>

using namespace std;

void print_bars (int number)
{
    if (number != 0)
    {
        print_bars (number - 1);
        print_bars (number - 1);
        for (int i = 1; i <= number; ++i) cout << '*'; cout << endl;
    }
}

int main ()
{
    int number; cin >> number;
    print_bars (number);
}

/*
                *       // 1    Seq 1
                *       // 1    Seq 1   Seq 2   
                **      // 2            Seq 2
                *       // 1    Seq 1           Seq 3
                *       // 1            Seq 2   Seq 3
                **      // 2            Seq 2   Seq 3
                ***     // 3                    Seq 3
                *       // 1    Seq 1                   Seq 4
                *       // 1            Seq 2           Seq 4
                **      // 2            Seq 2           Seq 4
                *       // 1                    Seq 3   Seq 4
                *       // 1                    Seq 3   Seq 4
                **      // 2                    Seq 3   Seq 4
                ***     // 3                    Seq 3   Seq 4
                ****    // 4                            Seq 4
*/