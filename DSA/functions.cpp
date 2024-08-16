#include<bits/stdc++.h>
using namespace std;

//Pass by value

int sum(int a, int b){
    return a+b;
}

//pass by address
void swapAddress(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b =temp;
}

//pass by reference
void swapRefrence(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int x1 = 4;
    int x2 = 5;

    cout << sum(x1,x2) << endl;

    cout << x1 << " " << x2 << endl;
    swapAddress(&x1,&x2);
    cout << x1 << " " << x2 << endl;
    swapRefrence(x1,x2);
    cout << x1 << " " << x2 << endl;
    return 0;
}