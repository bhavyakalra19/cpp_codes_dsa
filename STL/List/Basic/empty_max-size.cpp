#include<bits/stdc++.h>

using namespace std;

bool check_empty(list<string> l1){
    if(l1.empty()){
        return true;
    }else{
        return false;
    }
}

int main(){
    list<string> l1;
    if(check_empty(l1)){
        cout << "List of string is empty" << endl;
    }else{
        cout << "List of string is not empty" << endl;
    }

    l1 = {"a","b"};

    if(check_empty(l1)){
        cout << "List of string is empty" << endl;
    }else{
        cout << "List of string is not empty" << endl;
    }

    cout << l1.max_size() << endl; // returns max size of list
    return 0;
}