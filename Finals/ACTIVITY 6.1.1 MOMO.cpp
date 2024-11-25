#include <iostream>
using namespace std;

int main()
{
	//Create a C++ Program that applies MDAS Calculator.
	char a;
	
	//Float so decimals can also be inserted.
	float x = 0;
	float y = 0;
	
	cout<<"Enter First number: ";
	cin>>x;
	cout<<"Enter Second number: ";
	cin>>y;
	cout<<"Choose Operational Symbol (+ - * / ): ";
	cin>>a;
	
	switch (a)
	{
	case '+':
	cout<<"The sum is "<<x+y<<endl;
	break;
	
	case '-':
	cout<<"The difference is "<<x-y<<endl;
	break;
	
	case '*':
	cout<<"The product is "<<x*y<<endl;
	break;
	
	case '/':
	if(y==0)
	{cout<<"You cannot divide by 0, please try again."<<endl;
	}
	else {cout<<"The quotient is "<<x/y<<endl;
	}
	break;
	
	//If the input is invalid.
	default:
		{
		cout<<"Invalid input, please try again."<<endl;
		break;
		}
	}
	return 0;
}
