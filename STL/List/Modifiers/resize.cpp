#include<bits/stdc++.h>

using namespace std;

void display(list<int> l1){
    for(auto i : l1){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    list<int> l1{1,2,3,4,5,6,7,8,9};
    cout << "List before resizing:" << endl;
    display(l1);

    cout << "list after resizing with less elements" << endl;
    l1.resize(4);
    display(l1);

    cout << "list after resizing with greater elements" << endl;
    l1.resize(6);
    display(l1);

    cout << "list after resizing with greater elements with value given" << endl;
    l1.resize(10,9);
    display(l1);
    return 0;
}