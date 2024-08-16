#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int,int> mp;
    mp.emplace(1,1);
    mp.emplace(2,2);
    mp.emplace(3,3);
    mp.emplace(5,5);

    for(int i = 1; i < 7; i++){
        cout << mp[i] << endl; // It will display 0 for which key is not present
    }
    return 0;
}