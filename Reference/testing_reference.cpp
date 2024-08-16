#include<bits/stdc++.h>

using namespace std;

void test_one(){
    int a = 10;
    int& i = a;
    cout << &a << endl;
    cout << &i << endl;
    // Both show same result
}

void test_two(){
    int a;
    int* ptr;
    ptr = &a;
    cout << &a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
}

int main(){
    test_one();
    test_two();
    return 0;
}