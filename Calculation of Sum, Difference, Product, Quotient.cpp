#include <iostream>
using namespace std;

int main()
{
    // local variables
    int num1 = 0, num2 = 0, num3 = 0, average = 0, sum = 0, difference = 0, product = 0, quotient = 0;

    cout << "Input num1: ";
    cin >> num1;
    cout << "Input num2: ";
    cin >> num2;
    cout << "Input num3: ";
    cin >> num3;

    // Calculation of Average
    average = (num1 + num2 + num3) / 3.0;

    // Print the average
    cout << "The input average is " << average << endl;
    
    // Calculation of Sum
    sum = num1 + num2 + num3;
    
    // Print the Sum
    cout << "The sum is " << sum << endl;
    
    // Calculation of Difference
	difference = num1 - num2 - num3;
	
	// Print the Difference
	cout<< "The difference is " << difference << endl;
	
	// Calculation of Product
	product = num1 * num2 * num3;
	
	// Print the Product
	cout<< "The product is " << product << endl;
	
	// Caculation of Quotient
	quotient = num1 / num2 / num3;
	
	// Print the Quotient
	cout << "The quotient is " << quotient << endl;
    return 0;
}
