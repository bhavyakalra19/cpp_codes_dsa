#include<bits/stdc++.h>

using namespace std;

void func_BE(set<int> st){
    for(auto it = st.begin(); it != st.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

set<int> get_data(set<int> st, int n){
    int data;
    for(int i = 0; i < n; i++){
        cout << "Enter variable number: " << i+1 << endl;
        cin >> data;
        st.insert(data);
    }
    return st;
}

int main(){
    set<int> st;
    int n;
    cout << "Enter number of variables you want to enter in the set" << endl;
    cin >> n;
    st = get_data(st,n);
    cout << "Displaying set variables" << endl;
    func_BE(st);
    return 0;
}