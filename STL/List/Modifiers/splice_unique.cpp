#include<bits/stdc++.h>

using namespace std;

int main(){
    list<int> l1{7,8,0,10,11,12};
    list<int> l2{2,2,4,4,6,6};
    list<int>::iterator it = l1.begin();

    l2.unique();// Removes duplicate elements in list
    for(int&x : l2){
        cout << x << " ";
    }
    cout << endl;

    cout << "...................." << endl;

    advance(it,2);
    l1.splice(it,l2);
    for(int&x : l1){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}