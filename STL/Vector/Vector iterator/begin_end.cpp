#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1;// This is how we initialize a vector of int datatype
    int n;
    for(int i = 0; i<5;i++){
        cin >> n;
        v1.push_back(n);
    }
    cout << "................." << endl;
    for(auto i = v1.begin(); i != v1.end(); i++){
        cout << *i << endl;
    }
}