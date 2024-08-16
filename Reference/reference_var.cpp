#include<bits/stdc++.h>

using namespace std;

void func_one(){
    int a = 10;
    int& b = a;
    cout << b << endl;
}

void multi_ref(){
    int a = 20;
    int& b = a;
    int& c = a;
    cout << b << endl;
    cout << c << endl;
}

void one_to_many_ref(){
    int a = 4;
    int b = 10;
    int& x = a;
    //int& x = b; we can not initizaled a same reference variable for other variable.
}

void test_func(){
    int a;
    int& b = a;
    b = 10;
    cout << a << endl;
    cout << &a << endl;
    cout << &b << endl;
}

int main(){
    test_func();
    // func_one();
    // multi_ref();
    // one_to_many_ref();
    return 0;
}

// Reference variable must be initialized at the time of the declaration.
// int &b;  
// &b=a;    
// Above code will show error as it should be initialized at the time of declaration
