#include<bits/stdc++.h>

using namespace std;

int main(){
    list<int> l1{1,2,3,4,5,6};
    cout << "The size of list: " << l1.size() << endl;
    for(auto i : l1){
        cout << i << endl;
    }
    l1.resize(4);
    cout << "Printing list after resizing" << endl;
    for(auto i : l1){
        cout << i << endl;
    }
    cout << "The size of list after resizing: " << l1.size() << endl;
    return 0;
}