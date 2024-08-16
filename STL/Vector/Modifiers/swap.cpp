#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1, v2;
    v1.assign(4,7);
    v2.assign(4,4);
    cout << "Before swap: " << endl;
    cout << "V1: " << endl;
    for(auto it = v1.begin(); it != v1.end(); it++){
        cout << *it << endl;
    }
    cout << "V2: " << endl;
    for(auto it = v2.begin(); it != v2.end(); it++){
        cout << *it << endl;
    }
    v1.swap(v2);// We can swap vector of any size but of same data type
    cout << "After swap: " << endl;
    cout << "V1: " << endl;
    for(auto it = v1.begin(); it != v1.end(); it++){
        cout << *it << endl;
    }
    cout << "V2: " << endl;
    for(auto it = v2.begin(); it != v2.end(); it++){
        cout << *it << endl;
    }
    return 0;
}