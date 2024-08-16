#include<bits/stdc++.h>

using namespace std;



void func_one(){
    int a = 10;
    int *b = &a;
    int **c = &b;
    cout << c << endl;
    cout << *c << endl;
    cout << **c << endl;
    cout << b << endl;
    cout << *b << endl;
}

void func_two(){
    int *ptr = new int(5);
    char *ptr1 = new char('h');
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << ptr1 << endl;
    cout << *ptr1 << endl;
}

void func_three(){
    int a;
    int *b;
    int **c;
    b = &a;
    c = &b;
    cout << a << " " << b << " " << c << endl;
    cout << a << " " << *b << " " << *c << endl;
    cout << **c << endl;
}

int main(){
    // func_one();
    // func_two();
    func_three();
    return 0;
}