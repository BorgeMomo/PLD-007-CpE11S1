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
		cout<<"Vowel!";
		break;
		
		case 'A':
		cout<<"Vowel!";
		break;
		
		case 'e':
		cout<<"Vowel!";
		break;
		
		case 'E':
		cout<<"Vowel!";
		break;
		
		case 'i':
		cout<<"Vowel!";
		break;
		
		case 'I':
		cout<<"Vowel!";
		break;
		
		case 'o':
		cout<<"Vowel!";
		break;
		
		case 'O':
		cout<<"Vowel!";
		break;
		
		case 'u':
		cout<<"Vowel!";
		break;

		case 'U':
		cout<<"Vowel!";
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
