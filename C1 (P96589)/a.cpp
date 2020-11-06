#include <iostream>

using namespace std;

int main()
{
    char input;
    cin >> input;

    if (input >= '0' && input <= '9') cout << "digit";
    else if (input >= 'A' && input <= 'Z' || input >= 'a' && input <= 'z') cout << "lletra";
    else cout << "res";

    cout << endl;
}