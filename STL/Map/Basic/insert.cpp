#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int,int> mp1,mp2;

    mp1.insert(make_pair(1,2));
    mp1.insert(make_pair(3,4));

    cout << "Printing values of mp1" << endl;
    for(auto it = mp1.begin(); it!=mp1.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    mp2.insert(mp1.begin(),mp1.end());

    cout << "Printing values of mp2" << endl;
    for(auto it = mp2.begin(); it!=mp2.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}