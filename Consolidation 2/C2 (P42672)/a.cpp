#include <iostream>
#include <vector>

using namespace std;

vector<int> get_binary (int decimal)
{
    vector<int> binary;
    while (decimal/2 > 1) binary.insert(binary.begin(), decimal%2), decimal /= 2;
    binary.insert(binary.begin(), decimal%2);
    if (decimal/2 != 0) binary.insert(binary.begin(), decimal/2);

    return binary;
}

int main ()
{
    int x, y;
    while (cin >> x)
    {
        cin >> y;
        vector<int> binary_x = get_binary (x);
        //for (int i = 0; i < binary_x.size(); ++i) cout << binary_x[i];
        
        vector<int> binary_y = get_binary (y);
        vector<int> binary_merged (2*binary_x.size());
        //cout << "ok";
        for (int i = 0; i < binary_x.size()*2; ++i) 
        {
            if (i%2 == 0) binary_merged[i] = binary_x[i/2];
            else binary_merged[i] = binary_y[i/2];
        }
        for (int i = 0; i < binary_merged.size(); ++i) cout << binary_merged[i];
        cout << endl;
    }
}