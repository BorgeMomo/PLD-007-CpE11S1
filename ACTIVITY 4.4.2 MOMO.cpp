#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter a letter/number/symbol: ";
    cin >> ch;

    if (islower(ch)) cout << "The character is a lowercase letter." << endl;
    else cout << "The character is not a lowercase letter." << endl;

    if (isupper(ch)) cout << "The character is an uppercase letter." << endl;
    else cout << "The character is not an uppercase letter." << endl;

    cout << "The character converted to lowercase: " << (char)tolower(ch) << endl;
    cout << "The character converted to uppercase: " << (char)toupper(ch) << endl;

    if (isblank(ch)) cout << "The character is a blank space." << endl;
    else cout << "The character is not a blank space." << endl;

    if (isdigit(ch)) cout << "The character is a digit." << endl;
    else cout << "The character is not a digit." << endl;

    if (isalpha(ch)) cout << "The character is a letter." << endl;
    else cout << "The character is not a letter." << endl;

    if (isalnum(ch)) cout << "The character is alphanumeric." << endl;
    else cout << "The character is not alphanumeric." << endl;

    if (isxdigit(ch)) cout << "The character is a hexadecimal digit." << endl;
    else cout << "The character is not a hexadecimal digit." << endl;

    if (isspace(ch)) cout << "The character is a whitespace character." << endl;
    else cout << "The character is not a whitespace character." << endl;

    if (isgraph(ch)) cout << "The character is a printable character other than a space." << endl;
    else cout << "The character is not a printable character other than a space." << endl;

    if (iscntrl(ch)) cout << "The character is a control character." << endl;
    else cout << "The character is not a control character." << endl;

    if (isprint(ch)) cout << "The character is a printable character including space." << endl;
    else cout << "The character is not a printable character including space." << endl;

    if (ispunct(ch)) cout << "The character is a punctuation character." << endl;
    else cout << "The character is not a punctuation character." << endl;

    return 0;
}

