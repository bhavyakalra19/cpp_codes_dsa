#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2{2,3,4,5,6};
    vector<int> v3(4,5); // Also works as a assign method. It will add four 5 in the vector v1
    for(auto it = v3.begin(); it != v3.end(); it++){
        cout << *it << endl;
    }
    cout << "........................." << endl;
    for(auto it = v2.begin(); it != v2.end(); it++){
        cout << *it << endl;
    }
    return 0;
}