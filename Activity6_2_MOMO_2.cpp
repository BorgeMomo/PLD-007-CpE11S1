#include <iostream>
using namespace std;

int main(){
	float fare = 9;
	float age;
	float senior;
	string s;
	float citizen;
	
	cout<<"Enter your age: ";
	cin>>age;
	
	if (age>=65) {
	cout<<"You have a senior citizen discount. Your fare is "<< fare - (fare * 0.10) << endl;
	} 
	else {
	cout<<"Are you a student? (Yes/No): ";
	cin>>s;
	if(s == "Yes") {
	cout << "You have a student discount. Your fare is "<<fare - (fare * 0.08)<<endl;
	}
	else { 
	cout<< "You have no discount. Your fare is "<< fare << endl;}
	}
	
	return 0;
}
