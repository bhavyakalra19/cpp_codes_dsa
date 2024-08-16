#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1{1,2,3,4};
    vector<int>::iterator it;
    it = v1.begin();
    cout << *it << endl;

    advance(it,2);
    cout << *it << endl;
    return 0;
}