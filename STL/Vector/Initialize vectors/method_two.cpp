#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1{1,2,3,4,5,6,7};
    vector<int> v2(v1.begin(),v1.end());// Copy vector v1 into vector v2
    for(auto it = v2.begin(); it != v2.end(); it++){
        cout << *it << endl;
    }
    return 0;
}