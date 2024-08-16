#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string,int> mp;
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;
    mp["four"] = 4;

    map<string,int>::iterator it = mp.begin();
    
    cout << "Printing all maps items" << endl;
    while(it != mp.end()){
        cout << it->first << " : " << it->second << endl;
        ++it;
    }
    return 0;
}