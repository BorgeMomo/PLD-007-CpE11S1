#include <iostream>
using namespace std;

double cubearea(double s) {
    return s * s * s;
}

int main() {
    double side;
	double area;
    cout << "Enter the side length of the cube: ";
    cin >> side;
    area = cubearea(side);
    cout << "The area of the cube is: " << area << endl;

    return 0;
}

