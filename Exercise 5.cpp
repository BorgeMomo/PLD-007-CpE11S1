#include <iostream>
using namespace std;

int main()
{	
	//Create a C++ to determine if alphabet is a vowel or a consonant
	char c;
	
	cout<<"Enter a letter: ";
	cin>>c;
	
	switch(c)
	{
		case 'a':
		cout<<"Vowel!"<<endl;
		break;
		
		case 'A':
		cout<<"Vowel!"<<endl;
		break;
		
		case 'e':
		cout<<"Vowel!"<<endl;
		break;
		
		case 'E':
		cout<<"Vowel!"<<endl;
		break;
		
		case 'i':
		cout<<"Vowel!"<<endl;
		break;
		
		case 'I':
		cout<<"Vowel!"<<endl;
		break;
		
		case 'o':
		cout<<"Vowel!"<<endl;
		break;
		
		case 'O':
		cout<<"Vowel!"<<endl;
		break;
		
		case 'u':
		cout<<"Vowel!"<<endl;
		break;

		case 'U':
		cout<<"Vowel!"<<endl;
		break;

		//If the input is none of the above
		default:
		{
		cout<<"Consonant!"<<endl;
		break;
		}
	}

	return 0;
}
