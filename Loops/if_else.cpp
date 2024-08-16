#include<bits/stdc++.h>

using namespace std;

void checkEven(int num){
    //if-else condition
    if (num % 2 == 0){
        cout << "Number " << num << " is Even" << endl;
    }else{
        cout << "Number " <<  num << " is not even" << endl;
    }
}

int main(){
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    checkEven(a);
    checkEven(b);
}