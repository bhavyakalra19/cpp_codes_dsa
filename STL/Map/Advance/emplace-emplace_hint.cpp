#include<bits/stdc++.h>

using namespace std;

void displayMap(map<int,int> mp){
    for(auto it=mp.begin();it!=mp.end();it++){
        cout << it->first << " " << it->second << endl;
    }
}

int main(){
    map<int,int> mp;
    mp.insert({1,1});
    mp.insert({2,2});
    mp.insert({3,3});
    mp.insert({4,4});

    cout << "Display data without emplace" << endl;
    displayMap(mp);

    cout << "Display data after emplace" << endl;
    mp.emplace(9,9);
    displayMap(mp);

    map<int,int>::iterator it;
    it = mp.emplace_hint(mp.begin(),6,6);
    cout << "Display data after emplace_hint" << endl;
    displayMap(mp);
    cout << "....................................." << endl;
    cout << it->first << " " << it->second << endl;
    return 0;
}