#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1;
    for(int i = 0; i<4; i++){
        v1.push_back(i*10);
    }
    cout << v1[2] << endl;
    cout << v1.at(2) << endl;
    return 0;
}