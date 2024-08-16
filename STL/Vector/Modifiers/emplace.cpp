#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1;
    v1.assign(4,7);
    v1.emplace(v1.begin(),9);
    // v1.emplace_back(9);
    for(auto it = v1.begin(); it != v1.end(); it++){
        cout << *it << endl;
    }
}