// https://www.geeksforgeeks.org/stdstring-class-in-c/
#include<bits/stdc++.h>

using namespace std;

#define MAX_NAME_LEN 60  // Maximum len of your name can't be more than 60
#define MAX_ADDRESS_LEN 120  // Maximum len of your address can't be more than 120
#define MAX_ABOUT_LEN 250 // Maximum len of your profession can't be more than 250

// int main(){
//     //getline basic 
//     string fullName;
//     cout << "Enter a full name" << endl;
//     getline(cin, fullName);
//     cout << "you entered: " << fullName << endl;
//     return 0;
// }

int main(){
    char name[MAX_NAME_LEN], address[MAX_ADDRESS_LEN], about[MAX_ABOUT_LEN];
    cout << "Enter your name" << endl;
    cin.getline(name, MAX_NAME_LEN);
    cout << "Entered Name:" << name << endl;

    //use of delimeter to stop reading string after certain character
    cout << "Enter address" << endl;
    cin.getline(address, MAX_ADDRESS_LEN, 'r');// it willnot pick words including r and afterwards it
    cout << "Entered address is: " << address << endl;
    return 0;
}
