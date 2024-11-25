#include <iostream>
using namespace std;

int celsius(int fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int fahrenheit(int celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    cout << "Celsius  Fahrenheit    Fahrenheit  Celsius" << endl;

    for (int i = 0; i <= 100; i += 10) {
        int f_to_c = celsius(32 + (i * 9 / 5));
        int c_to_f = fahrenheit(i);

        cout << i << "        " << c_to_f << "             " 
             << (32 + (i * 9 / 5)) << "         " << f_to_c << endl;
    }

    return 0;
}

