#include<bits/stdc++.h>

using namespace std;

int func_one(){
    vector<int> v1;
    int n;
    for(int i = 0; i < 5 ; i++){
        cout << "Enter value: " << i+1 << endl;
        cin >> n;
        v1.push_back(n);
    }
    return v1.size();
}

int main(){
    int n = func_one();
    cout << "The size of vector is: " << n << endl;
    return 0;
}