#include <iostream>
using namespace std;

bool multiple(int number, int x){
	return (number % x == 0);
}

int main(){
	int number, x;
	
	cout<<"Enter an integer: ";
	cin>>number;
	
	cout<<"Enter the multiple: ";
	cin>>x;
	
	if(multiple(number, x)) {
		cout<< number << " is a multiple of " << x << "." << endl;
	}
	else {
		cout<< number << " is not a multiple of " << x << "." <<endl;
	}
	return 0;
}
