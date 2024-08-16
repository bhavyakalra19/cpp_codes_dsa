#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int,int> mp;
    mp.insert(make_pair(1,1));
    cout << "Count 1: " << mp.count(1) << endl;
    cout << "Count 100: " << mp.count(100) << endl;
    auto it = mp.find(1);
    cout << "Find 1: " << it->second << endl;
    it = mp.find(100);
    cout << "Find 100: " << it->second << endl;
}