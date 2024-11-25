#include <iostream>
using namespace std;

float toCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

float toFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    int choice;
    float temperature; 
	float converted;

    cout << "Temperature Converter"<<endl;
    cout << "1. Fahrenheit to Celsius"<<endl;
    cout << "2. Celsius to Fahrenheint"<<endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        converted = toCelsius(temperature);
        cout << "Temperature in Celsius: " << converted << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        converted = toFahrenheit(temperature);
        cout << "Temperature in Fahrenheit: " << converted << endl;
    } else {
        cout << "Invalid choice, try again." << endl;
        return main();
    }

    return 0;
}

