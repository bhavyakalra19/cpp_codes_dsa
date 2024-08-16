#include<bits/stdc++.h>

using namespace std;

vector<int> fun_one(){
    vector<int> v1;
    v1.assign(4,7);
    return v1;
}

void func_two(vector<int> &v2){ // Pass reference as after making changes it will reflect on the vector without returning.
    v2.emplace(v2.begin(),9);
    v2.emplace_back(9);
}

int main(){
    vector<int> v;
    v = fun_one();
    cout << "Before calling function 2" << endl;
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }
    func_two(v);
    cout << "After calling function two" << endl;
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }
    return 0;
}