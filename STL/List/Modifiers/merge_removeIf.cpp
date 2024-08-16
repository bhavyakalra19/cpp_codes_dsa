#include<bits/stdc++.h>

using namespace std;

void func_merge(){
    list<int> l1{1,2,3,4,5,6};
    list <int> l2{4,2,6};

    l1.merge(l2); // it also tries to merge and sort

    for(int&x : l1){
        cout << x << " ";
    }
    cout << endl;
}

void func_removeIf(){
    list<int> l1{1,2,3,4,5,6,7,8};
    cout << "Printing elements before removing any element" << endl;
    for(int&x : l1){
        cout << x << " ";
    }
    cout << endl;

    l1.remove_if([](int x){return x > 4;});    
    cout << "Printing elements after removing any element" << endl;
    for(int&x : l1){
        cout << x << " ";
    }
    cout << endl;
}

int main(){
    // func_merge();
    func_removeIf();
    return 0;
}