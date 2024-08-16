#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int,int> mp;
    mp.insert({1,1});
    mp.insert({2,2});
    mp.insert({3,3});
    mp.insert({4,4});

    auto it = mp.lower_bound(3);
    cout << it->first << " " << it->second << endl;
    return 0;
}