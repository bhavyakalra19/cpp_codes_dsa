#include<bits/stdc++.h>

using namespace std;

void display(list<int> l1){
    for(auto i : l1){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    list<int> l1{1,2,3,4,5,6,10};
    list<int>::iterator it;

    cout << "Printing list before erasing element" << endl;
    display(l1);

    it = l1.end();// As it points to the empty part of list
    it--;
    l1.erase(it);

    cout << "Printing list after erasing element" << endl;
    display(l1);
    return 0;
}