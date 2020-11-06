#include <iostream>

using namespace std;

int main()
{
    int dynamic_size;
    while (cin >> dynamic_size)
    {
        int size = dynamic_size;

        //Loop parte superior
        int max_blank = dynamic_size - 1;
        while (max_blank != 0)
        {
            for (int k = 1; k <= dynamic_size + max_blank; ++k)
            {
                if (k <= max_blank) cout << " ";
                else cout << "X";
            }
            cout << endl;

            dynamic_size += 2;
            max_blank -= 1;
        }

        //Loop del medio
        for (int i = 1; i <= size; ++i)
        {
            for (int k = 1; k <= dynamic_size; ++k)
            {
                cout << "X";
            }   
            cout << endl;
        }

        //Loop parte inferior
        while (size != dynamic_size)
        {
            dynamic_size -= 2;
            max_blank += 1;

            for (int k = 1; k <= dynamic_size + max_blank; ++k)
            {
                if (k <= max_blank) cout << " ";
                else cout << "X";
            }
            cout << endl;
        }
        cout << endl;
    }
}