#include<bits/stdc++.h>

using namespace std;

int main(){
    list<int> l1{2,3,4,5,6};
    list<int> l2{7,8,9};
    l2.remove_if([](int x){return x % 2 == 0;});
    for(auto it : l2){
        cout << it << " ";
    }
    cout << endl;

    l1.swap(l2);
    for(auto it : l2){
        cout << it << " ";
    }
    cout << endl;

    l2.reverse();
    for(auto it : l2){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}