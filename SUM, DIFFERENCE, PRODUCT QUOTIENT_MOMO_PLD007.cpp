#include <iostream>
using namespace std;

int main()
{
	int num1 = 0, num2 = 0, num3 = 0, sum = 0, difference = 0, product = 0, quotient = 0, average = 0;
	
	cout<<"For addition: "<<endl;
	cout<<" "<<endl;
	cout<<"Enter 1st number: ";
	cin>>num1;
	cout<<"Enter 2nd number: ";
	cin>>num2;
	cout<<"Enter 3rd number ";
	cin>>num3;
	cout<<" "<<endl;
	sum = num1 + num2 + num3;
	cout<<"The sum of those numbers are: " << sum << endl;
	cout<<" "<<endl;
	
	cout<<"For subtraction: "<<endl;
	cout<<" "<<endl;
	cout<<"Enter 1st number: ";
	cin>>num1;
	cout<<"Enter 2nd number: ";
	cin>>num2;
	cout<<"Enter 3rd number ";
	cin>>num3;
	cout<<" "<<endl;
	difference = num1 - num2 - num3;
	cout<<"The difference of those numbers are: "<< difference<<endl;
	cout<<" "<<endl;
	
	cout<<"For multiplication: "<<endl;
	cout<<" "<<endl;
	cout<<"Enter 1st number: ";
	cin>>num1;
	cout<<"Enter 2nd number: ";
	cin>>num2;
	cout<<"Enter 3rd number ";
	cin>>num3;
	cout<<" "<<endl;
	product = num1 * num2 * num3;
	cout<<"The product of those numbers are: "<<product<<endl;
	cout<<" "<<endl;
	
	cout<<"For division: "<<endl;
	cout<<" "<<endl;
	cout<<"Enter 1st number: ";
	cin>>num1;
	cout<<"Enter 2nd number: ";
	cin>>num2;
	cout<<"Enter 3rd number ";
	cin>>num3;
	cout<<" "<<endl;
	quotient = num1 / num2 / num3;
	cout<<"The quotient of those numbers are: "<<quotient<<endl;
	cout<<" "<<endl;
	
	cout<<"For average: "<<endl;
	cout<<" "<<endl;
	cout<<"Enter 1st number: ";
	cin>>num1;
	cout<<"Enter 2nd number: ";
	cin>>num2;
	cout<<"Enter 3rd number ";
	cin>>num3;
	cout<<" "<<endl;
	average = (num1 + num2 +num3) / 3.0;
	cout<<"The average of those numbers are: " << average << endl;
	
	return 0;
}

