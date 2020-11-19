#include <iostream>
#include <string>

using namespace std;

void print_line(char c, string s, bool b) 
{
    cout << s << "('" << c << "') = ";
    if (b) cout << "true" << endl;
    else cout << "false" << endl;
}

int main ()
{
    char character; cin >> character;
    
    bool is_uppercase = ((character >= 'A' and character <= 'Z'));
    bool is_lowercase = ((character >= 'a' and character <= 'z'));
    bool is_letter = (is_uppercase or is_lowercase);
    bool is_vowel = (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U' || character == 'a'
                    || character == 'e' || character == 'i' || character == 'o' || character == 'u');
    bool is_consonant = (is_letter and !is_vowel);
    bool is_digit = (character >= '0' and character <= '9');

    print_line(character, "letter", is_letter);
    print_line(character, "vowel", is_vowel);
    print_line(character, "consonant", is_consonant);
    print_line(character, "uppercase", is_uppercase);
    print_line(character, "lowercase", is_lowercase);
    print_line(character, "digit", is_digit);
}