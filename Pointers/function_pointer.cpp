#include<bits/stdc++.h>

using namespace std;

int sum(int a, int b){
    return a+b;
}

void print_str(char *str){
    cout << "My name is " << str << endl;
}

void sum_func(){
    int (*func_ptr)(int,int);
    func_ptr = sum;
    cout << func_ptr(5,6) << endl;
}

void str_func(){
    char s[20];
    void (*ptr)(char*);
    ptr  = print_str;
    cin >> s;
    ptr(s);
}

int main(){
    // sum_func();
    str_func();
    return 0;
}