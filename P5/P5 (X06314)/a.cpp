#include <iostream>

using namespace std;

void info_sequence (int& sum, int& last)
{
    sum = 0;
    int number;
    while (cin >> number and number != 0) 
    {
        sum += number;
        last = number;
    }
}

int main ()
{
    int first_sum, first_last;
    info_sequence (first_sum, first_last);
    int similar_sequences = 1;
    bool last_sequence = false;
    while (!last_sequence)
    {
        int sum, last; 
        info_sequence (sum, last);
        
        if ((first_sum == sum) and (first_last == last)) ++similar_sequences;
        if (sum == 0) last_sequence = true;
    }
    cout << similar_sequences << endl;
    
}