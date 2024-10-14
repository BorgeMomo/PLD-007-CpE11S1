#include <iostream>
using namespace std;

int main()
{	
	float p, b, m, co, ch;
	int a;
	
	cout<<"Physics Grade: ";
	cin>>p;
	cout<<"Biology Grade: ";
	cin>>b;
	cout<<"Math Grade: ";
	cin>>m;
	cout<<"Computer Grade: ";
	cin>>co;
	cout<<"Chemistry Grade: ";
	cin>>ch;
	
	a = (p + b + m + co + ch) /5;
	
	cout<<"--------------------------------"<<endl;
	cout<<"Average is: "<<a<<endl;

	//Switch Case
	switch (a)
	{
		case 90 ... 100:
		cout<<"Grade is A";
		break;
		
		case 80 ... 89:
		cout<<"Grade is B";
		break;
		
		case 70 ... 79:
		cout<<"Grade is C";
		break;
		
		case 60 ... 69:
		cout<<"Grade is D";
		break;
		
		case 40 ... 59:
		cout<<"Grade is E";
		break;
		
		case 0 ... 39:
		cout<<"Grade is F";
		break;
	}
	return 0;
}
