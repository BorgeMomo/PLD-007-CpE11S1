#include <iostream>
using namespace std;

	//Create a C++ program that displays integers less than 10 but not less than 3
	
	int main(){
	int i = 9;
	cout<<"The integers that are less than 10 but not less than 3 are: "<<endl;
	do
	{cout<<""<< i << endl;
	i--;}
	while(i<10 && i>=3);
	return 0;}
