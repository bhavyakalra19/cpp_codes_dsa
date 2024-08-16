#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1;
    v1.assign(4,7);
    v1.clear();
    for(auto it = v1.begin(); it != v1.end(); it++){
        cout << *it << endl;
    }
    cout << "Nothing will be reflected as vector is cleared" << endl;
}