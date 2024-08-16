#include<bits/stdc++.h>

using namespace std;

void display(set<int> st){
    for(auto i : st){
        cout << i << " ";
    }
    cout << endl;
}

void swap_sets(set<int> &st1,set<int> &st2){
    st1.swap(st2);
}

int main(){
    set<int> st1;
    set<int> st2;
    st1.insert(2);
    st1.insert(3);
    st1.insert(4);
    st1.insert(5);
    st1.insert(6);
    st1.insert(7);
    st1.insert(8);

    st2.insert(st1.find(4),st1.find(8));

    cout << "Displaying st1" << endl;
    display(st1);
    cout << "Displaying st2" << endl;
    display(st2);

    cout << "Swapping" << endl;
    swap_sets(st1,st2);

    cout << "Displaying st1" << endl;
    display(st1);
    cout << "Displaying st2" << endl;
    display(st2);
    return 0;
}