#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string,int> mp;
    mp["bhavya"] = 23;
    mp["chilli"] = 20;
     
    cout << "The size of map is: " << mp.size() << endl;
    cout << "The max size of map is: " << mp.max_size() << endl;
    return 0;
}