#include<bits/stdc++.h>

using namespace std;

int main(){
    list<int> l1{1,2,3,4,5};
    vector<int> v1{5,6,7,8,9};

    for(auto i : v1){  // For vectors
        cout << i << endl;
    }
    cout << "..............." << endl;
    for(auto i : l1){
        cout << i << endl;
    }
    return 0;
}