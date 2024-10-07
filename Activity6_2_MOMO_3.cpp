#include <iostream>
using namespace std;

int main() {
    double total = 0;   
    float counter, average = 0;        
    double grade;          

    cout << "Enter your grade (-1 to end): ";
    cin >> grade;

    while (grade != -1) {
		total += grade;
		counter++;
	cout << "Enter your grade (-1 to end): ";
	cin >> grade;
    }

	if (counter != 0) {
		average = total / counter;
		cout << "Average grade: " << average << endl;
    } else {
    	cout << "No grades were entered." << endl;
    }
    return 0;
}
