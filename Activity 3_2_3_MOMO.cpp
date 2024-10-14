#include <iostream>
using namespace std;

int main(){
	int number = 1;
	int sum = 0;
	
	for(number; number>=1 && number<=7; number++){
		sum  = number + 1;
		cout<<number<<" ";
	}
	return 0;
}
