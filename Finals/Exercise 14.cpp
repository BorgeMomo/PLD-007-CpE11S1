#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(0)); //Seed the random number generator
	int randomValue = rand(); //Generate a random number
	cout<<"Random value: "<<randomValue<<endl;
	return 0;
}
