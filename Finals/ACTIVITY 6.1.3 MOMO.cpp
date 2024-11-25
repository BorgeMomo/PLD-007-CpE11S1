#include <iostream>
using namespace std;

float toPesos(double dollars, double exchangeRate) {
    return dollars * exchangeRate;
}

float toDollars(double pesos, double exchangeRate) {
    return pesos / exchangeRate;
}

int main() {
    int choice;
    float amount; 
	float converted; 
	float exchangeRate;

    cout << "Currency Converter"<<endl;
    cout << "Enter the current exchange rate as of now. (1 Dollar to Pesos): "; //This is incase the current exchange rates change.
    cin >> exchangeRate;

    cout << "1. Dollars to Pesos"<<endl;
    cout << "2. Pesos to Dollars"<<endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter amount in Dollars: ";
        cin >> amount;
        converted = toPesos(amount, exchangeRate);
        cout << "Amount in Pesos: " << converted << endl;
    } else if (choice == 2) {
        cout << "Enter amount in Pesos: ";
        cin >> amount;
        converted = toDollars(amount, exchangeRate);
        cout << "Amount in Dollars: " << converted << endl;
    } else {
        cout << "Invalid choice, try again" << endl;
        return main();
    }

    return 0;
}

