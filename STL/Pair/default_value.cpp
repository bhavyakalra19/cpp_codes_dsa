#include<bits/stdc++.h>

using namespace std;

void print_int_double_pair(){
    pair<int,double> p1;
    cout << "It will print 0 for the int and 0 for the double: ";
    cout << p1.first << " " << p1.second << endl;
}

void print_string_char_pair(){
    pair<string,char> p1;
    cout << "It will print null for the string and null for the char: ";
    cout << p1.first << " " << p1.second << endl;
}

void print_string_int_pair(){
    pair<string,int> p1;
    cout << "It will print null for the string and 0 for the int: ";
    cout << p1.first << " " << p1.second << endl;
}

int main(){
    print_int_double_pair();
    print_string_char_pair();
    print_string_int_pair();
    return 0;
}