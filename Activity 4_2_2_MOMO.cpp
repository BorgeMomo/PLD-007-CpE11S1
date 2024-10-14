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

	//if else
	if (a >= 90){cout<<"Grade is A;";}
	else if (a >= 80 && a <= 89){cout<<"Grade is B";}
	else if (a >= 70 && a <= 79){cout<<"Grade is C";}
	else if (a >= 60 && a <= 79){cout<<"Grade is D";}
	else if (a >= 40 && a <= 69){cout<<"Grade is E";}
	else {cout<<"Grade is F";}
	
	return 0;
}
