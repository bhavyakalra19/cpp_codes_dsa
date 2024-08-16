#include<bits/stdc++.h>

using namespace std;

void display(list<int> l1){
    for(auto i : l1){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    list<int> l{4,4,4,4};
    list<int> l1(l.begin(),l.end());
    cout << "Printing list before any operation" << endl;
    display(l1);

    l1.emplace_front(9);
    l1.emplace_back(9);

    cout << "Printing list after emplace_front and emplace_back operations" << endl;
    display(l1);
    list<int>::iterator it;
    it = l1.begin();
    advance(it,3);// Advance iterator with 3 positions

    cout << "Printing list after emplace operation" << endl;
    l1.emplace(it,9);
    display(l1);
    return 0;
}