#include<bits/stdc++.h>

using namespace std;

int main(){
    pair<int,int> p1,p2;

    p1 = {1,2};
    p2 = {4,9};

    cout << "p1 values before swaping: " << p1.first << " " << p1.second << endl; 
    cout << "p2 values before swaping: " << p2.first << " " << p2.second << endl; 

    p1.swap(p2);

    cout << "p1 values after swaping: " << p1.first << " " << p1.second << endl; 
    cout << "p2 values after swaping: " << p2.first << " " << p2.second << endl; 

}