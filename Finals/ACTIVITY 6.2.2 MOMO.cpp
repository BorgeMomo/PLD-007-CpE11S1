#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double side1, double side2) {
    return sqrt((side1 * side1) + (side2 * side2));
}

int main() {
    double s1;
	double s2;
	double hyp;
    cout << "Enter the length of the first side: ";
    cin >> s1;
    cout << "Enter the length of the second side: ";
    cin >> s2;
    hyp = hypotenuse(s1, s2);
    cout << "The hypotenuse is: " << hyp << endl;

    return 0;
}

