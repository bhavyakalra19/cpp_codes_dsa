#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    cout << a + b << endl;
    cout << "................." << endl;

    //You can't do the operations on the numbers which are stored as strings
    //If you try to add these two strings the result will be concatenation of strings
    
    string x = "10";
    string y = "20";
    cout << x + y << endl;

    return 0;
}