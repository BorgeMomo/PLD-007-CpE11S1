#include <iostream>
using namespace std;

int main() {

    char lower[] = {'p', 'P', '5', '!'};
    char upper[] = {'D', 'd', '8', '&'};
    char uppercase[] = {'u', '7', '$', 'L'};

    cout << "According to islower:" << endl;
    for (char ch : lower) {
        if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a lowercase letter" << endl;
        } 
        else {
        cout << ch << " is not a lowercase letter" << endl;
        }
    }

    cout << endl << "According to isupper:" << endl;
    for (char ch : upper) {
        if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an uppercase letter" << endl;
        } else {
        cout << ch << " is not an uppercase letter" << endl;
        }
    }

    cout << endl << "Conversions to uppercase:" << endl;
    for (char ch : uppercase) {
        if (ch >= 'a' && ch <= 'z') {
        char ch = ch - 'a' + 'A'
        cout << ch << " converted to uppercase is " << ch << endl;
        }
        else if(ch >= 'A' && ch <= 'Z') {
        cout << ch << " converted to lowercase is " << (char)(ch - 'A' + 'a') << endl;
        }
        else {
        cout << ch << " converted to uppercase is " << ch << endl;
        }
    }
    return 0;
}
