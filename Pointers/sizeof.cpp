#include<bits/stdc++.h>

using namespace std;

class base{
    int a;
};

class base_two{
    int a;
    int b;
};

class base_three{
    int a;
    float c;
};

void function_call(){
    base b;
    base_two b2;
    base_three b3;
    cout << sizeof(b) << endl;
    cout << sizeof(b2) << endl;
    cout << sizeof(b3) << endl;
}

int main(){
    // function_call();
    int *x = new int(10);
    char *y = new char('h');
    float *z = new float(10.0);
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << "...................." << endl;
    cout << sizeof(x) << endl;
    cout << sizeof(y) << endl;
    cout << sizeof(z) << endl;
    cout << "...................." << endl;
    cout << *x << endl;
    cout << *y << endl;
    cout << *z << endl;
    cout << "...................." << endl;
    cout << sizeof(*x) << endl;
    cout << sizeof(*y) << endl;
    cout << sizeof(*z) << endl;
    return 0;
}