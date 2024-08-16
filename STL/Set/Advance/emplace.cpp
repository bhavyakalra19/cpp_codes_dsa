#include<bits/stdc++.h>

using namespace std;

void display(set<int> st){
    for(auto i : st){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    set<int> st;
    st.emplace(2);
    st.emplace(3);
    st.emplace(4);
    st.emplace(5);
    st.emplace(1);
    cout << "Displaying set" << endl;
    display(st);
    return 0;
}