#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double p = 1000.00; 
    double r = 0.05; 
    int year = 10; 

    for (int n = 1; n <= year; ++n) {
        float a = p * pow(1 + r, n);
	cout<< a << endl;
    }

    return 0;
}

