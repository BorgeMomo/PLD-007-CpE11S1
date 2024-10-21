#include <iostream>
using namespace std;

int main() {
	int size = 10;
    int arr[size] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
	
	cout << "Element\t\tValue\t\tHistogram" << endl;
    for (int i = 0; i < size; i++) {
        	cout<<i<<"\t\t"<<arr[i]<<"\t\t";
		for (int j = 0; j < arr[i]; j++) {
    	cout<<"*";
            }
        cout<<"\n";
	}
    return 0;
}

