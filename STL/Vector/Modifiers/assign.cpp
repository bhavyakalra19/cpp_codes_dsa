#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1;
    v1.assign(4,7);// It will assign number 7 four times in vector v1
    // for(int i = 0; i < v1.size(); i++){
    //     cout << v1[i] << endl;
    // }  
    //OR
    for(auto it = v1.begin(); it != v1.end(); it ++){
        cout << *it << endl;
    }
}