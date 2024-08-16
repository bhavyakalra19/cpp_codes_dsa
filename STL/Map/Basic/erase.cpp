#include<bits/stdc++.h>

using namespace std;

void displayMap(map<int,int> mp){
    for(auto it=mp.begin();it!=mp.end();it++){
        cout << it->first << " " << it->second << endl;
    }
}

map<int,int> erase_it(map<int,int> mp){
    auto it = mp.find(3);
    mp.erase(it);
    return mp;
}


map<int,int> erase_value(map<int,int> mp){
    mp.erase(2);
    return mp;
}

int main(){
    map<int,int> mp,mp1;
    mp.insert({1,1});
    mp.insert({2,2});
    mp.insert({3,3});
    mp.insert({4,4});
    mp.insert({5,5});
    mp.insert({6,6});
    cout << "Displaying map before any operation" << endl;
    displayMap(mp);

    cout << "Displaying map after using erase_value" << endl;
    mp1 = erase_value(mp);
    displayMap(mp1);
    mp1.clear();
    
    cout << "Displaying map after using erase_it" << endl;
    mp1 = erase_it(mp);
    displayMap(mp1);
    mp1.clear();

    return 0;
}