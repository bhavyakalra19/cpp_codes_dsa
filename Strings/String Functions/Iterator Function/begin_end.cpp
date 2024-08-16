#include<bits/stdc++.h>

using namespace std;

void func_one_one(string str){
    string::iterator it;
    it = str.begin();
    cout << *it << endl;
}

void func_one_two(string str){
    string::reverse_iterator it;
    it = str.rbegin();
    cout << *it << endl;
}

void func_two_one(string str){
    string::iterator it;
    it = str.end();
    cout << *it << endl;
}

void func_two_two(string str){
    string::reverse_iterator it;
    it = str.rend();
    cout << *it << endl;
}

//These above can point to char and also can change them
//but cbegin() and cend() , crbegin() and crend() can only point not change value

int main(){
    string name;
    cout << "Enter a string" << endl;
    cin >> name;
    func_one_one(name);
    func_one_two(name);
    func_two_one(name);
    func_two_two(name);//These end function will not display anything as it points to null value after string
    return 0;
}