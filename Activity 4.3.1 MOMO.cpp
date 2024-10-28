#include <iostream>
#include <string>

using namespace std;

int main() {
	string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
   
	int day;
    cout << "Enter a number (0-6): ";
    cin >> day;

    if (day >= 0 && day < 7) {
        cout << days[day] << endl;
    } else {
        cout << "Error, no such day." << endl;
		return 0;
    }
	
	return main();
}
