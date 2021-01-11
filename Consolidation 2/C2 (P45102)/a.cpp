#include <iostream>

using namespace std;

int evaluate ()
{
    int result;
    char c; cin >> c;
    if (c >= '0' and c <= '9') return int(c - '0');
    if (c == '*' or c == '+' or c == '-') return c;
    if (c == '(')
    {
        int operand1 = evaluate();
        char operation = evaluate();
        int operand2 = evaluate();

        if (operation == '*') result = operand1*operand2;
        else if (operation == '+') result = operand1+operand2;
        else result = operand1 - operand2;
        char parent; cin >> parent;
    }
    return result;
    
}

int main ()
{
    cout << evaluate() << endl;
}