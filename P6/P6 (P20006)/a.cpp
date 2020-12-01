#include <iostream>

using namespace std;

int eval_expression ()
{
    char character; cin >> character;
    if (character >= '0' and character <= '9') return (int)(character - '0');
    else 
    {
        int a = eval_expression ();
        int b = eval_expression ();
        if (character == '+') return (a + b);
        else if (character == '-') return (a - b);
        else return (a * b);
    }
}

int main ()
{
    cout << eval_expression () << endl;
}