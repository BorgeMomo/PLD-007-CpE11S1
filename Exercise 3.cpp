#include <iostream>
using namespace std;

int main(){
	
	float x;
	
	cout<<"Enter your grade: ";
	cin>>x;
	
	if (x >= 94) {cout<<"Your grade is Excellent."<<endl;}
	else if (x >= 88.5 && x <= 93.99 ){cout<<"Your grade is Superior."<<endl;}
	else if (x >= 83.5 && x <= 88.49 ){cout<<"Your grade is Meritorious."<<endl;}
	else if (x >= 77.5 && x <= 82.99 ){cout<<"Your grade is Very Good."<<endl;}
	else if (x >= 72 && x <= 77.49 ){cout<<"Your grade is Good."<<endl;}
	else if (x >= 65.5 && x <= 71.99 ){cout<<"Your grade is Very Satisfactory."<<endl;}
	else if (x >= 61 && x <= 65.49){cout<<"Your grade is Satisfactory."<<endl;}
	else if (x >= 55.5 && x <= 60.99){cout<<"Your grade is Fair."<<endl;}
	else if (x >= 50){cout<<"Your grade is Passing." <<endl;}
	else {cout<<"If your Equivalent Grade is 4.00, Your Grade is Incomplete, Otherwise, You failed."<<endl;}

	return 0;
}
