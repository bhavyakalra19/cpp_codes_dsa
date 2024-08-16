#include<bits/stdc++.h>

using namespace std;

void assign_one(){
    deque<int> d1 = {1,2,3,4,5,6};
    deque<int> d2;
    deque<int>::iterator it = d1.begin();
    advance(it,2);
    d2.assign(it,d1.end());

    cout << "Displaing deque 1" << endl;
    for(auto ij: d1){
        cout << ij << " ";
    }
    cout << endl;

    cout << "Displaying deque 2" << endl;
    for(auto i : d2){
        cout << i << " ";
    }
    cout << endl;
}

void assign_two(){
    deque<int> dt;
    dt.assign(4,7);
    cout << "The deque elements are: " << endl;
    for(auto i : dt){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    assign_one();
    assign_two();
    return 0;
}