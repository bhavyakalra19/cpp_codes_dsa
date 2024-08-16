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
    for(auto i = v1.crbegin(); i != v1.crend(); i++){
        cout << *i << endl;
    }
}