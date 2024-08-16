#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1;
    v1.assign(5,7);
    v1.erase(v1.begin());
    for(auto it = v1.begin(); it != v1.end(); it++){
        cout << *it << endl;
    }
}