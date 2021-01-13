#include <iostream>
#include <vector>

using namespace std;

void zeros_counter (vector<int> &input, vector<int> &output)
{
    int n = input.size();
    /*
        Podemos contar los ceros en la secuencia input y restarlos
        cada vez que se encuentre uno
    */
    int zeros = 0;
    for (int i = 0; i < n; ++i) if (input[i] == 0) ++zeros;
    for (int i = 0; i < n; ++i)
    {
        output[i] = zeros;
        if (input[i] == 0) --zeros;
    }
}

int main ()
{
    int n; cin >> n;
    vector<int> input(n);
    vector<int> output(n);
    
    for (int i = 0; i < n; ++i) cin >> input[i];
    zeros_counter (input, output);

    for (int i = 0; i < n; ++i)
    {
        cout << output[i] << endl; 
    }

}