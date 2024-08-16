#include<bits/stdc++.h>

using namespace std;

int main(){
    int a=10, b=20,*p=&a, *q=&b;
    cout << "Value of numbers before swapping. a:" << a << " b: " << b << endl;
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    cout << "Value of numbers after swapping. a:" << a << " b: " << b << endl;
    return 0;
}