#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int,int> mp;

    if(mp.empty()){
        cout << "Map mp is empty" << endl;
    }else {
        cout << "Map mp is not empty" << endl;
    }

    mp[4] = 9;

    if(mp.empty()){
        cout << "Map mp is empty" << endl;
    }else {
        cout << "Map mp is not empty" << endl;
    }
    return 0;
}