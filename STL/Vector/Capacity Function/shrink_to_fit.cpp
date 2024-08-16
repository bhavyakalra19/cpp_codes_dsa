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
    cout << "Vector capacity before resize: " << v1.capacity() << endl;
    v1.resize(3);
    v1.shrink_to_fit();// To reduce capacity of vector use shrink_to_fit() function.
    cout << "Vector capacity After resize: " << v1.capacity() << endl;
    return v1.size();
}

int main(){
    int n = func_one();
    cout << "The size of vector is: " << n << endl;
    return 0;
}