#include<bits/stdc++.h>

using namespace std;

map<string,int> func_one(){
    map<string,int> mp;
    mp.insert(pair<string,int>("Bhavya",23));
    return mp;
}

map<string,int> func_two(){
    map<string,int> mp;
    mp.insert({"chilli",20});
    return mp;
}

int main(){
    auto mp1 = func_one();
    auto mp2 = func_two();

    cout << "Printing map mp1" << endl;
    for(auto it=mp1.begin(); it!=mp1.end();it++){
        cout << it->first << " " << it->second << endl;
    }
    cout << "Printing map mp2" << endl;
    for(auto it=mp2.begin(); it!=mp2.end();it++){
        cout << it->first << " " << it->second << endl;
    }
}