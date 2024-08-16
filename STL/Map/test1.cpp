#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> mp;
    mp[1] = 9;
    auto it = mp.find(2);
    if(it == mp.end()){
        cout << "hello" << endl;
    }
    return 0;
}