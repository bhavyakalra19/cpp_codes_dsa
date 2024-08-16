#include<bits/stdc++.h>

using namespace std;

void swap(int a, int& b){
    int num;
    num = a;
    a = b;
    b = num;
    // No need to return values
}

int main(){
    int a = 5;
    int b = 6;
    cout << a << " " << b << endl;
    swap(a,b);
    cout << a << " " << b << endl;
    return 0;
}