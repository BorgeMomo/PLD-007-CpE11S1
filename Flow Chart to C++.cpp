#include <iostream>
using namespace std;

int main(){
	
	int x = 4, y = 2, sum = 0, difference = 0, product = 0, quotient = 0, remainder = 0;
	
	sum = x + y;
	difference = x - y;
	product = x * y;
	quotient = x / y;
	remainder = x % y;
	
	cout<<"If x = 4 and y = 2, then the results of the following are: "<<endl;
	cout<<"Sum: "<<sum <<endl;
	cout<<"Difference: "<<difference<<endl;
	cout<<"Product: "<<product<<endl;
	cout<<"Quotient: "<<quotient<<endl;
	cout<<"Remainder: "<<remainder<<endl;
	
	return 0;
}
