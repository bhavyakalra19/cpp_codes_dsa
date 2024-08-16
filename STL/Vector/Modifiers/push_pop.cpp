#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1;
    v1.assign(4,7);// It will assign number 7 four times in vector v1
    v1.pop_back();
    v1.push_back(9);
    for(auto it = v1.begin(); it != v1.end(); it ++){
        cout << *it << endl;
    }
}