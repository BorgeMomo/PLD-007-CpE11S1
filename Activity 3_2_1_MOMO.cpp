#include <iostream>
using namespace std;

int main(){
	int x = 2;
	int sum = 0;
	
	for(x; x<=100; x += 2){
		sum += x;
		cout<<sum<<endl;
	}
	return 0;
}
