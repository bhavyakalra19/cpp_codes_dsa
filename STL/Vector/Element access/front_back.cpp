#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1;
    for(int i = 0; i<5; i++){
        v1.push_back(i*10);
    }
    cout << v1.front() << endl;
    cout << v1.back() << endl;
    return 0;
}