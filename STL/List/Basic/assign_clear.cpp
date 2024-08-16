#include<bits/stdc++.h>

using namespace std;

bool check_empty(list<int> l1){
    if(l1.empty()){
        return true;
    }else{
        return false;
    }
}

int main(){
    list<int> l1;
    l1.assign(4,7);
    for(auto i : l1){
        cout << i << endl;
    }
    cout << "Checking if list is empty or not" << endl;
    string str = check_empty(l1) ? "The list is empty" : "The list is not empty";
    cout << str << endl;

    l1.clear();
    cout << "Checking if list is empty or not after clear method" << endl;
    str = check_empty(l1) ? "The list is empty" : "The list is not empty";
    cout << str << endl;
    return 0;
}