#include <iostream>
using namespace std;

int main()
{
	char a;
	
	cout<<"Enter your Gender. (M/F): "<<endl;
	cin>>a;
	
	switch (a)
	{
	case 'm':
	case 'M':
	cout<<"You are a Male!";
	break;
	
	case 'f':
	case 'F':
	cout<<"You are a Female!";
	break;
	
	default:
		{
		cout<<"Invalid.";
		break;
		}
	}
	return 0;
}
