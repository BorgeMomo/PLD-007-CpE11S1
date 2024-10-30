#include <iostream>
#include <string>
using namespace std;

int main(){
    string str[4];
    int total = 0;
    
    cout<<"Enter 4 numbers: "<< endl;
    for (int i = 0; i < 4; i++){
        cout<<"Number "<<i + 1<<": ";
        cin>>str[i];
    }
    
    for (int i = 0; i < 4; i++){
        total += stoi(str[i]);
    }
    
    cout<<"The total is: "<< total << endl;
    return 0;
}
