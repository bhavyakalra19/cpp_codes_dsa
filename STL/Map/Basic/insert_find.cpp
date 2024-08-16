#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int,int> mp1;
    mp1.insert({1,10});
    mp1.insert({2,20});
    mp1.insert({2,50});// This duplicate item with key 2 will not be inserted
    mp1.insert({4,40});
    for(auto it = mp1.begin(); it!=mp1.end(); it++){
        cout << it->first << " " << it->second << endl;
    }


    auto it = mp1.find(2);
    cout << "The iterator value: " << it->first << " " << it->second << endl;

    mp1.insert(it,{3,30});

    for(auto it = mp1.begin(); it!=mp1.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}