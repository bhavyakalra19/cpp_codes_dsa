#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int,int> mp;
    mp.insert({1,1});
    mp.insert({2,2});
    mp.insert({3,3});
    mp.insert({4,4});

    pair<map<int,int>::iterator,map<int,int>::iterator> it = mp.equal_range(2);
    cout << "Lower bound values are: " << it.first->first << " " << it.first->second << endl;
    cout << "Upper bound values are: " << it.second->first << " " << it.second->second << endl;
    return 0;
}